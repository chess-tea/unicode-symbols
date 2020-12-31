// These are the ranges we will generate bindings for. Structured like:
//
//   (Module, [(lower, upper)])
//
// If Module is empty the default module is used.
// If any symbol names start with the module name, then it gets trimmed off.
//
let config = [
  (
    "",
    [
      // Non breaking space.
      (0x00A0, 0x00A0),
    ],
  ),
  ("Block", [(0x2580, 0x259F)]),
  ("BoxDrawings", [(0x2500, 0x257F)]),
  ("Currency", [(0x0024, 0x0024), (0x00A2, 0x00A5), (0x20A0, 0x20BF)]),
];

// Some symbols need some extra description.
let comment =
  Bread.IntMap.fromList([
    (0x20A0, "Not the Euro. Not widely used."),
    (0x20A4, "Not widely used. Preferred character for lira is `pound`."),
    (0x20A8, "India, unofficial legacy practice. See `indianRupee`."),
  ]);

// Some module names we never want to clean.
let shouldClean = name => {
  switch (name) {
  | "Currency" => false
  | _ => true
  };
};

let uncapitalize = String.uncapitalize_ascii;
let capitalize = String.capitalize_ascii;
module String = Bread.String;

// Configuration setup.

let (/) = Filename.concat;
let root =
  try(Sys.getenv("GEN_ROOT_DIR")) {
  | e =>
    Console.error("[FATAL] GEN_ROOT_DIR environment variable not set.");
    raise(e);
  };

let unicodeData = root / "data" / "UnicodeData.txt";
let outputFile = root / "src" / "UnicodeSymbols.re";

// Used to print the actual characters in the comments.
let unicodeFromInt = n => {
  let char = Uchar.of_int(n);
  let buffer = Buffer.create(1);
  Buffer.add_utf_8_uchar(buffer, char);
  Buffer.contents(buffer);
};

// "titleCase" ... this is just a good-enough implementation.
let titleCase = s => {
  let s = s |> String.replaceAll("-", " ") |> String.replaceAll("_", " ");
  let parts = String.split(" ", s);
  let parts =
    parts |> List.map(part => {part |> String.toLowercase |> capitalize});
  let titleCase = String.concat("", parts);
  titleCase;
};

// Read the data file.
let lines = Fs.readTextExn(Fp.absoluteExn(unicodeData));

// Parse it into more helpful data.
let data =
  lines
  |> List.map(line => {
       let parts = String.split(";", line);

       let hexCode = "0x" ++ List.hd(parts);
       let int = int_of_string(hexCode);

       let name = List.hd(List.tl(parts));
       let name = titleCase(name);
       (int, hexCode, name);
     });

// Construct the file.
let header = [
  "/**",
  " * This file is generated, do not modify it manually.",
  " *",
  " *   - Update `Gen.re`",
  " *   - Then run `esy gen`",
  " *",
  " * @generated",
  " */;",
  "",
  "/** Converts an integer to a unicode character, example: fromInt(0x2500) */",
  "let fromInt = n => {",
  "  let char = Uchar.of_int(n);",
  "  let buffer = Buffer.create(1);",
  "  Buffer.add_utf_8_uchar(buffer, char);",
  "  Buffer.contents(buffer);",
  "};",
  "",
];

let contents =
  List.map(
    config => {
      let (moduleName, ranges) = config;
      let empty = moduleName == "";
      let indent = empty ? "" : "  ";
      let pre = empty ? [] : ["module " ++ moduleName ++ " = {"];
      let post = empty ? [] : ["};"];

      let inRange = x =>
        List.exists(((low, high)) => x >= low && x <= high, ranges);

      let innerRev = ref([]);
      List.iter(
        ((int, hex, name)) => {
          ();
          if (inRange(int)) {
            let cleanName =
              if (shouldClean(moduleName)
                  && String.indexOfInt(moduleName, name) === 0) {
                String.sliceToEnd(String.length(moduleName), name);
              } else {
                name;
              };

            // It was formerly TitleCase, this converts it to camelCase.
            let cleanName = uncapitalize(cleanName);

            let comment =
              if (Bread.IntMap.hasKey(int, comment)) {
                let value = Bread.IntMap.getExn(int, comment);
                " - " ++ value;
              } else {
                "";
              };

            // Add the lines representing this symbol.
            innerRev :=
              [
                [
                  "",
                  indent
                  ++ "/** '"
                  ++ unicodeFromInt(int)
                  ++ "' ("
                  ++ hex
                  ++ ")"
                  ++ comment
                  ++ " */",
                  indent ++ "let " ++ cleanName ++ " = fromInt(" ++ hex ++ ");",
                ],
                ...innerRev^,
              ];
            ();
          };
          ();
        },
        data,
      );

      let inner = List.rev(innerRev^);
      let inner = List.concat(inner);

      switch (inner) {
      | [] =>
        failwith(
          "Inner contents of '"
          ++ moduleName
          ++ "' is empty. Check the config settings.",
        )
      | _ => ()
      };

      // This should remove the blank line at the start. This will fatal if
      // there ended up being no contents.
      let inner = List.tl(inner);

      let result = pre @ inner @ post @ [""];
      result;
    },
    config,
  );

// Flatten into the final set of lines.
let contents = List.concat(contents);

let lines = header @ contents;

// Remove the extra new line at the end.
let lines = lines |> List.rev |> List.tl |> List.rev;

Fs.writeTextExn(Fp.absoluteExn(outputFile), lines);
