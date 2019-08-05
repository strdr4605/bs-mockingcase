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
Mockingcase.convertString2("mockingcase", {"random": true, "firstUpper": false, "onlyLetters": false});
// mOCKIngCAse
Mockingcase.convertArray2([|"reasonml", " 2 ", "mockingcase"|], {"random": true, "firstUpper": true, "onlyLetters": true});
// ReAsOnMl  MoCkInGcAsE

Mockingcase.logFromString1("logging");
// Js.log("lOgGiNg");
Mockingcase.logFromString2("random logging", {"random": true, "firstUpper": false, "onlyLetters": false});
// Js.log("RAndOM LoGgiNg");
Mockingcase.logFromArray1([|"array", " ", "logging"|]);
// Js.log("aRrAy lOgGiNg");
Mockingcase.logFromArray2([|"array", " ", "random logging"|], {"random": true, "firstUpper": false, "onlyLetters": false});
// Js.log("ARray raNdOm loGGiNg");
```
