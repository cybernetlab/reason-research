type store = {
  top: int,
};

type actions =
  | Add
  | Remove;

let reducer = (action, state) => {
  switch(action) {
  | Add => ReasonReact.Update({...state, top: state.top + 1})
  | Remove => ReasonReact.Update({...state, top: state.top - 1})
  }
}
