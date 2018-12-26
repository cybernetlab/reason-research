module Styles {
  open Css;

  let toolbarContainer = style([]);
};

let component = ReasonReact.statelessComponent("Component1");

let make = (~className, _children) => {
  ...component,
  render: _self =>
    <div className={className ++ " " ++ Styles.toolbarContainer}>
    </div>,
};
