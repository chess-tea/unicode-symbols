# `unicode_symbols`

An easy way to reference and use different unicode symbols.

# Usage

The `UnicodeSymbols` module is meant to give easy access to `strings` for common
unicode symbols. This prevents you from needing to copy/paste the symbols, or
figuring out how to convert from a hex code to the symbol.

```reason
let box =
  UnicodeSymbols.BoxDrawings.lightDownAndRight
  ++ UnicodeSymbols.BoxDrawings.lightHorizontal
  ++ UnicodeSymbols.BoxDrawings.lightDownAndLeft
  ++ "\n"
  ++ UnicodeSymbols.BoxDrawings.lightUpAndRight
  ++ UnicodeSymbols.BoxDrawings.lightHorizontal
  ++ UnicodeSymbols.BoxDrawings.lightUpAndLeft;

print_endline(box);
```

Outputs a tiny box:

```
┌─┐
└─┘
```

_Note: This is not a complete set of the unicode symbols, but it is very easy to
add more symbols to the output (see [`Gen.re`](./gen/Gen.re)). If there is a
set you want to use, please open an issue or pull request!_

# Contributing

## Install `esy`

Globally install [`esy`](https://www.npmjs.com/package/esy) so that the `esy`
command is available in the terminal.

```bash
npm install -g esy
```

_This may be useful: [Global npm without sudo](https://github.com/sindresorhus/guides/blob/master/npm-global-without-sudo.md)_

## Install the dependencies and build

```bash
esy
```

_This is a combination of `esy install` and `esy build`_

## Run tests for `UnicodeSymbols.re`

```bash
esy test
```

_This should automatically rebuild if there are changes_

## More Details

- For more details and additional setup see: [`details.md`](details.md)
  - Editor support
  - Adding dependencies
  - Recursive dub-directories
  - Ignoring warnings
  - Printing stack traces

## Next Steps

For CI/CD, check out [`esy-ocaml/hello-reason`](https://github.com/esy-ocaml/hello-reason).
