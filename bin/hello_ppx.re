open Core;

let () =
  Sexp.to_string_hum([%sexp ([3, 4, 5]: list(int))]) |> print_endline;
let () =
  Sexp.to_string_hum([%sexp ([|3, 4, 5|]: array(int))]) |> print_endline;
