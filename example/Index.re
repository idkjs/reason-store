
type user = {name: string};

// store a reason record
let test = {name: "Marcus"};
Store.set("user", test);

// store a javascript object
let test2 = {"name": "Janet"};
Store.set("user2", test2);

// Get current user
let marcus = Store.get("user");
Js.log(marcus);

let janet = Store.get("user2");
Js.log(janet);

let noone = Store.get("user3");
Js.log2("noone",noone);

Js.log2("hasNamespace", Store.hasNamespace(~namespace="test"));

// Remove current user
// Store.remove("user")

// Clear all keys
// Store.clearAll()->ignore

// Loop over all Stored values
// let fn = (~valuee: 'a, ~namespacedKey: string) =>
//   Js.log3("logger", valuee, namespacedKey);
Store.each((~value: 'a, ~namespacedKey: string) =>
  Js.log3("logger", value, namespacedKey)
);
