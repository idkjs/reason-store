class type _storeJsAPI =
  [@bs]
  {
    pub name: string;
    pub get: (~key: string) => option(string);
    pub set: (~key: string, ~value: 'a) => unit;
    pub remove: (~key: string) => unit;
    pub each: (~callback: (~value: 'a, ~namespacedKey: string) => unit) => unit;
    pub clearAll: unit => unit;
    pub hasNamespace: (~namespace: string) => bool;
  };

type t = Js.t(_storeJsAPI);
[@bs.module] external store: t = "store";

[@bs.send] external _createStore: t => unit = "createStore";
let set = (key, value) => store##set(~key, ~value);
let get = key => store##get(~key);
let remove = key => store##remove(~key);
let each = fn => store##each(~callback=fn);
let clearAll = () => store##clearAll();
let hasNamespace = (~namespace) => store##hasNamespace(~namespace);
let store = () => store;
let createStore = () => _createStore(store());
