type t;
let set: (string, 'a) => unit;
let get: string => option(string);
let remove: string => unit;
let each: ((~value: 'a, ~namespacedKey: string) => unit) => unit;
let clearAll: unit => unit;
let store: unit => t;
let createStore: unit => unit;
let hasNamespace: (~namespace: string) => bool;
