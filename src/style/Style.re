module Color = Style_Color;

type classList =
  | String(string)
  | ClassList(list(classList))
  | None;

let rec className =
  fun
  | [] => ""
  | classes =>
    classes
    |> List.fold_left((acc, classItem) => {
      switch (classItem) {
      | Some("")  => acc
      | Some(str) => acc ++ " " ++ str
      | None      => acc
      }
    }, "");
