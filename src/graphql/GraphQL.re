module Symbols = GraphQL_Symbols;

let map_list_result = (func, result) => {
  switch result {
  | Some(result) =>
    result
    |> Array.fold_left((acc, item) => {
      switch item {
      | Some(item) => [func(item), ...acc]
      |_ => acc
      }
    }, [])
    |> List.rev
    |> Array.of_list;
  | _ =>
    [||]
  };
}
