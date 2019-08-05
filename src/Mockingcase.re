type options = {
  .
  "random": bool,
  "onlyLetters": bool,
  "firstUpper": bool,
};

// binding for every type case
[@bs.module] external convertString: string => string = "mockingcase";
[@bs.module] external convertArr: array(string) => string = "mockingcase";
[@bs.module]
external convertStringWithOpts: (string, options) => string = "mockingcase";
[@bs.module]
external convertArrWithOpts: (array(string), options) => string =
  "mockingcase";

[@bs.module "mockingcase"] external logFromString: string => unit = "log";
[@bs.module "mockingcase"]
external logFromArr: array(string) => unit = "log";
[@bs.module "mockingcase"]
external logFromStringWithOpts: (string, options) => unit = "log";
[@bs.module "mockingcase"]
external logFromArrWithOpts: (array(string), options) => unit = "log";
