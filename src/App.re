Css.(
  global("html, body, #app", [
    width(`percent(100.0)),
    height(`percent(100.0)),
  ])
);

Css.(
  global("body, #app", [
    margin(`px(0)),
    display(`flex),
    flexDirection(`column),
    alignItems(`stretch),
    justifyContent(`center)
  ])
);

module Styles {
  open Css;

  let topToolbarContainer = style([]);

  let workspace = style([
    flexGrow(1.0),
  ]);
};

let component = ReasonReact.statelessComponent("Component1");

let make = (_children) => {
  ...component,
  render: _self =>
    <ReasonApollo.Provider client=Client.instance>
      <ToolbarContainer className={Styles.topToolbarContainer}/>
      <div className={Styles.workspace}>
        <Component2 greeting="Hello!" />
      </div>
    </ReasonApollo.Provider>,
};
