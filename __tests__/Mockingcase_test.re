open Jest;

describe("Mockingcase", () => {
  Expect.(
    test("convertString1", () => {
      let expected = "mOcKiNgCaSe";
      let result = Mockingcase.convertString1("mockingcase");
      expect(result) |> toEqual(expected);
    })
  );

  Expect.(
    test("convertString2", () => {
      let expected = "MoCkInGcAsE";
      let result =
        Mockingcase.convertString2(
          "mockingcase",
          Mockingcase.options(~firstUpper=true, ()),
        );
      expect(result) |> toEqual(expected);
    })
  );

  Expect.(
    test("convertArray1", () => {
      let expected = "mOcKiNgCaSe";
      let result = Mockingcase.convertArray1([|"mocking", "case"|]);
      expect(result) |> toEqual(expected);
    })
  );

  Expect.(
    test("convertArray2", () => {
      let expected = "MoCkInGcAsE";
      let result =
        Mockingcase.convertArray2(
          [|"mocking", "case"|],
          Mockingcase.options(~firstUpper=true, ()),
        );
      expect(result) |> toEqual(expected);
    })
  );
});
