open GraphQL.Symbols;

let str = ReasonReact.string;
let component = ReasonReact.statelessComponent("Example");

let make = (~symbols, _children) => {
  ...component,
  render: _self => {
    <div>
    {
      symbols
      |> GraphQL.map_list_result(item => <div key={item.id}>{str(item.id ++ " - " ++ item.name)}</div>)
      |> ReasonReact.array;
    }
    </div>
  },
};
