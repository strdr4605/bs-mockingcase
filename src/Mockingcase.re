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
