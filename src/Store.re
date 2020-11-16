// type t;
// [@bs.module "store.js"] external store:t = "store";
// let get = (str)=>Dom.Storage.get(str);
// module Dom_storage = {
//   type t = Dom_storage2.t
//   let getItem: (string, t) => option(string);
//   let setItem: (string, string, t) => unit;
//   let removeItem: (string, t) => unit;
//   let clear: t => unit;
//   let key: (int, t) => option(string);
//   let length: t => int;
//   let localStorage: t;
//   let sessionStorage: t;
// }

// type storeJsStorage = {
//   name: string,
//   read: (~key: string) => Js.Nullable.t(string),
//   write: (~key: string, ~data: string) => unit,
//   each: (~callback: (~value: string, ~key: string) => any) => unit,
//   remove: (~key: string) => unit,
//   clearAll: unit => unit,
// };

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
