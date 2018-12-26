type store = {
  toolbars: Store_Toolbars.store,
};

/* type actions =
  | Store_Toolbars.actions
  | Set; */

type actions =
  | Toolbar(Store_Toolbars.actions);

/*
let reducer = (action, state) => {
  switch action {
  | Toolbar(child) => ReasonReact.Update({...state, toolbars: Store_Toolbars.reducer(child, state.toolbars)})
  }
}
*/
