open TestFramework;

describe("UnicodeSymbols", ({test}) => {
  test("Strings", ({expect}) => {
    let box =
      UnicodeSymbols.BoxDrawings.lightDownAndRight
      ++ UnicodeSymbols.BoxDrawings.lightHorizontal
      ++ UnicodeSymbols.BoxDrawings.lightDownAndLeft
      ++ "\n"
      ++ UnicodeSymbols.BoxDrawings.lightUpAndRight
      ++ UnicodeSymbols.BoxDrawings.lightHorizontal
      ++ UnicodeSymbols.BoxDrawings.lightUpAndLeft;

    let expected = [
      // A tiny box!!
      "┌─┐",
      "└─┘",
    ];
    let expected = String.concat("\n", expected);

    expect.string(box).toEqual(expected);
  });

  test("Snapshots", ({expect}) => {
    let box =
      UnicodeSymbols.BoxDrawings.lightDownAndRight
      ++ UnicodeSymbols.BoxDrawings.lightHorizontal
      ++ UnicodeSymbols.BoxDrawings.lightDownAndLeft
      ++ "\n"
      ++ UnicodeSymbols.BoxDrawings.lightUpAndRight
      ++ UnicodeSymbols.BoxDrawings.lightHorizontal
      ++ UnicodeSymbols.BoxDrawings.lightUpAndLeft;
    expect.string(box).toMatchSnapshot();
  });
});
