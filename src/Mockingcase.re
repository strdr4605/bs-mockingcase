type options = {
  .
  "random": bool,
  "onlyLetters": bool,
  "firstUpper": bool,
};

// binding for every type case
[@bs.module] external convertString1: string => string = "mockingcase";
[@bs.module] external convertArray1: array(string) => string = "mockingcase";
[@bs.module]
external convertString2: (string, options) => string = "mockingcase";
[@bs.module]
external convertArray2: (array(string), options) => string =
  "mockingcase";

[@bs.module "mockingcase"] external logFromString1: string => unit = "log";
[@bs.module "mockingcase"]
external logFromArray1: array(string) => unit = "log";
[@bs.module "mockingcase"]
external logFromString2: (string, options) => unit = "log";
[@bs.module "mockingcase"]
external logFromArray2: (array(string), options) => unit = "log";
