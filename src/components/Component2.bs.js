// Generated by BUCKLESCRIPT VERSION 4.0.14, PLEASE EDIT WITH CARE
'use strict';

var Block = require("bs-platform/lib/js/block.js");
var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var SymbolList$ReactTemplate = require("./SymbolList.bs.js");
var GraphQL_Symbols$ReactTemplate = require("../graphql/GraphQL_Symbols.bs.js");

var component = ReasonReact.reducerComponent("Example");

function make(greeting, _children) {
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
          /* render */(function (self) {
              var message = "You've clicked this " + (String(self[/* state */1][/* count */0]) + " times(s)");
              var match = self[/* state */1][/* show */1];
              return React.createElement("div", undefined, React.createElement("button", {
                              onClick: (function (_event) {
                                  return Curry._1(self[/* send */3], /* Click */0);
                                })
                            }, message), React.createElement("button", {
                              onClick: (function (_event) {
                                  return Curry._1(self[/* send */3], /* Toggle */1);
                                })
                            }, "Toggle greeting"), match ? greeting : null, ReasonReact.element(undefined, undefined, Curry.app(GraphQL_Symbols$ReactTemplate.Query[/* make */3], [
                                  undefined,
                                  undefined,
                                  undefined,
                                  undefined,
                                  undefined,
                                  undefined,
                                  undefined,
                                  undefined,
                                  undefined,
                                  (function (param) {
                                      var result = param[/* result */0];
                                      if (typeof result === "number") {
                                        return React.createElement("div", undefined, "Loading");
                                      } else if (result.tag) {
                                        return ReasonReact.element(undefined, undefined, SymbolList$ReactTemplate.make(result[0].symbols, /* array */[]));
                                      } else {
                                        return React.createElement("div", undefined, result[0].message);
                                      }
                                    })
                                ])));
            }),
          /* initialState */(function (param) {
              return /* record */[
                      /* count */0,
                      /* show */true
                    ];
            }),
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */(function (action, state) {
              if (action) {
                return /* Update */Block.__(0, [/* record */[
                            /* count */state[/* count */0],
                            /* show */!state[/* show */1]
                          ]]);
              } else {
                return /* Update */Block.__(0, [/* record */[
                            /* count */state[/* count */0] + 1 | 0,
                            /* show */state[/* show */1]
                          ]]);
              }
            }),
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.component = component;
exports.make = make;
/* component Not a pure module */
