# bs-mockingcase

> Convert a string to mOcKiNgCaSe.

[mockingcase](https://github.com/strdr4605/mockingcase) bindings in [ReasonML](https://reasonml.github.io).

## Install

```
npm install bs-mockingcase --save
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
Mockingcase.convertString("mockingcase");
// mOcKiNgCaSe
Mockingcase.convertArr([|"reasonml", " ", "mockingcase"|]);
// rEaSoNmL MoCkInGcAsE
Mockingcase.convertStringWithOpts("mockingcase", {"random": true});
// mOCKIngCAse
Mockingcase.convertArrWithOpts([|"reasonml", " ", "mockingcase"|], {"random": true});
// rEaSONmL MocKinGcase

Mockingcase.logFromString("logging");
// Js.log("lOgGiNg");
Mockingcase.logFromStringWithOpts("random logging", {"random": true});
// Js.log("RAndOM LoGgiNg");
Mockingcase.logFromArr([|"array", " ", "logging"|]);
// Js.log("aRrAy lOgGiNg");
Mockingcase.logFromArrWithOpts([|"array", " ", "random logging"|], {"random": true});
// Js.log("ARray raNdOm loGGiNg");
```
