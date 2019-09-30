# bs-mockingcase

> Convert a string to mOcKiNgCaSe.

[mockingcase](https://github.com/strdr4605/mockingcase) bindings in [ReasonML](https://reasonml.github.io).

## Install

```
npm install https://github.com/strdr4605/bs-mockingcase.git --save
```

Then add `bs-mockingcase` to `bs-dependencies` in your `bsconfig.json`:

```
{
  ...
  "bs-dependencies": ["bs-mockingcase"]
}
```

## Usage

```reason
Mockingcase.convertString1("mockingcase");
// mOcKiNgCaSe
Mockingcase.convertArray1([|"reasonml", " ", "mockingcase"|]);
// rEaSoNmL MoCkInGcAsE
Mockingcase.convertString2("mockingcase", Mockingcase.options(~random=true, ()));
// mOCKIngCAse
Mockingcase.convertArray2(
  [|"reasonml", " 2 ", "mockingcase"|],
  Mockingcase.options(~random=true, ~onlyLetters=true, ~firstUpper=true, ()),
  );
// ReAsOnMl  MoCkInGcAsE

Mockingcase.logFromString1("logging");
// Js.log("lOgGiNg");
Mockingcase.logFromString2("random logging", Mockingcase.options(~random=true, ()));
// Js.log("RAndOM LoGgiNg");
Mockingcase.logFromString2(
  "upper LOwer logging",
  Mockingcase.options(~lower="lower", ~upper="upper", ()),
);
// Js.log("UPPER lower lOgGiNg");
Mockingcase.logFromArray1([|"array", " ", "logging"|]);
// Js.log("aRrAy lOgGiNg");
Mockingcase.logFromArray2([|"array", " ", "random logging"|], Mockingcase.options(~random=true, ()));
// Js.log("ARray raNdOm loGGiNg");
```
