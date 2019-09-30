// Binding for @strdr4605/mockingcase@1.10.1
[@bs.deriving abstract]
type options = {
  [@bs.optional]
  random: bool,
  [@bs.optional]
  onlyLetters: bool,
  [@bs.optional]
  firstUpper: bool,
  [@bs.optional]
  upper: string,
  [@bs.optional]
  lower: string,
};

[@bs.module]
external convertString1: string => string = "@strdr4605/mockingcase";
[@bs.module]
external convertArray1: array(string) => string = "@strdr4605/mockingcase";
[@bs.module]
external convertString2: (string, options) => string =
  "@strdr4605/mockingcase";
[@bs.module]
external convertArray2: (array(string), options) => string =
  "@strdr4605/mockingcase";

[@bs.module "@strdr4605/mockingcase"]
external logFromString1: string => unit = "log";
[@bs.module "@strdr4605/mockingcase"]
external logFromArray1: array(string) => unit = "log";
[@bs.module "@strdr4605/mockingcase"]
external logFromString2: (string, options) => unit = "log";
[@bs.module "@strdr4605/mockingcase"]
external logFromArray2: (array(string), options) => unit = "log";
