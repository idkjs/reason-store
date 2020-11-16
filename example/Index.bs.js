'use strict';

var Store$ReasonStore = require("../src/Store.bs.js");

var test = {
  name: "Marcus"
};

Store$ReasonStore.set("user", test);

var test2 = {
  name: "Marcus2"
};

Store$ReasonStore.set("user2", test2);

console.log("hasNamespace", Store$ReasonStore.hasNamespace("test"));

var user = Store$ReasonStore.get("user");

console.log(user);

var x = Store$ReasonStore.createStore(undefined);

console.log("createStore", x);

var user$1 = Store$ReasonStore.get("user2");

console.log(user$1);

Store$ReasonStore.each(function (value, namespacedKey) {
      console.log("logger", value, namespacedKey);
      
    });

exports.test = test;
exports.test2 = test2;
exports.x = x;
exports.user = user$1;
/*  Not a pure module */
