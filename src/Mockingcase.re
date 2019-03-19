type options = {. "random": bool};

// binding for every type case
[@bs.module] external convertString: string => string = "mockingcase";
[@bs.module] external convertArr: array(string) => string = "mockingcase";
[@bs.module] external convertStringWithOpts: (string, options) => string = "mockingcase";
[@bs.module] external convertArrWithOpts: (array(string), options) => string = "mockingcase";

[@bs.module "mockingcase"] external logFromString: string => string = "log";
[@bs.module "mockingcase"] external logFromArr: array(string) => string = "log";
[@bs.module "mockingcase"] external logFromStringWithOpts: (string, options) => string = "log";
[@bs.module "mockingcase"] external logFromArrWithOpts: (array(string), options) => string = "log";

// binding using Polymorphic Variant + bs.unwrap
[@bs.module]
external _mockingcase:
  ([@bs.unwrap] [ | `str(string) | `arr(array(string))], Js.Nullable.t(options)) => string =
  "mockingcase";

[@bs.module "mockingcase"]
external _log: ([@bs.unwrap] [ | `str(string) | `arr(array(string))], Js.Nullable.t(options)) => unit =
  "log";

let mOcKiNgCaSe = (~options=?, input) => _mockingcase(input, Js.Nullable.fromOption(options));

let log = (~options=?, input) => _log(input, Js.Nullable.fromOption(options));
