type symbol = {
  id: string,
  name: string,
};

module Graphql = [%graphql{|
  query symbols { symbols @bsRecord { id name } }
|}];

module Query = ReasonApollo.CreateQuery(Graphql);
