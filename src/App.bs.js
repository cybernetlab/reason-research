// Generated by BUCKLESCRIPT VERSION 4.0.14, PLEASE EDIT WITH CARE
'use strict';

var Css = require("bs-css/src/Css.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var ApolloProvider = require("reason-apollo/src/ApolloProvider.bs.js");
var Client$ReactTemplate = require("./Client.bs.js");
var Component2$ReactTemplate = require("./components/Component2.bs.js");
var ToolbarContainer$ReactTemplate = require("./components/toolbars/ToolbarContainer.bs.js");

Css.$$global("html, body, #app", /* :: */[
      Css.width(/* `percent */[
            -119887163,
            100.0
          ]),
      /* :: */[
        Css.height(/* `percent */[
              -119887163,
              100.0
            ]),
        /* [] */0
      ]
    ]);

Css.$$global("body, #app", /* :: */[
      Css.margin(/* `px */[
            25096,
            0
          ]),
      /* :: */[
        Css.display(/* flex */-1010954439),
        /* :: */[
          Css.flexDirection(/* column */-963948842),
          /* :: */[
            Css.alignItems(/* stretch */-162316795),
            /* :: */[
              Css.justifyContent(/* center */98248149),
              /* [] */0
            ]
          ]
        ]
      ]
    ]);

var topToolbarContainer = Css.style(/* [] */0);

var workspace = Css.style(/* :: */[
      Css.flexGrow(1.0),
      /* [] */0
    ]);

var Styles = /* module */[
  /* topToolbarContainer */topToolbarContainer,
  /* workspace */workspace
];

var component = ReasonReact.statelessComponent("Component1");

function make(_children) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function (_self) {
              return ReasonReact.element(undefined, undefined, ApolloProvider.make(Client$ReactTemplate.instance, /* array */[
                              ReasonReact.element(undefined, undefined, ToolbarContainer$ReactTemplate.make(topToolbarContainer, /* array */[])),
                              React.createElement("div", {
                                    className: workspace
                                  }, ReasonReact.element(undefined, undefined, Component2$ReactTemplate.make("Hello!", /* array */[])))
                            ]));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.Styles = Styles;
exports.component = component;
exports.make = make;
/*  Not a pure module */
