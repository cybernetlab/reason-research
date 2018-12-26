module Styles {
  open Css;

  let button = Some(style([]));
};

let component = ReasonReact.statelessComponent("Button");

let make = (~className=?, _children) => {
  ...component,
  render: _self =>
    <div className={Style.className([className, Styles.button])}>
    </div>,
};
