open TestFramework;

describe("UnicodeSymbols", ({test}) => {
  test("Strings", ({expect}) => {
    let actual = UnicodeSymbols.hello;
    let expected = "Hello World!";
    expect.string(actual).toEqual(expected);
  });

  test("Snapshots", ({expect}) => {
    let actual = UnicodeSymbols.hello;
    expect.string(actual).toMatchSnapshot();
  });
});
