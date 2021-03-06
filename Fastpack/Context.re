type t = {
  config: Config.t,
  current_dir: string,
  project_package: Package.t,
  tmpOutputDir: string,
  entry_location: Module.location,
  resolver: Resolver.t,
  reader: Worker.Reader.t,
  cache: Cache.t,
};

exception PackError(t, Error.reason);
exception ExitError(string);
exception ExitOK;

let errorToString = (current_dir, error) =>
  Printf.sprintf("\n%s\n", Error.to_string(current_dir, error));
