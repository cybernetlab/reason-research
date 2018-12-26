module Styles {
  open Css;

  let toolbar = style([]);
};

module Items = {
  module CommandButton = {
    type t = {action: string};
  };
  module MessageButton = {
    type t = {message: string};
  };
};

type item =
  | CommandButton(Items.CommandButton.t)
  | MessageButton(Items.MessageButton.t)
  | Group(array(item));

type state = {
  items: array(item),
};

let component = ReasonReact.statelessComponent("Toolbar");

let make = (~className, _children) => {
  ...component,
  render: _self =>
    <div className={className ++ " " ++ Styles.toolbar}>
    </div>,
};
