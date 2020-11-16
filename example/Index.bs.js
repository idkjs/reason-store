'use strict';

var Store$ReasonStore = require("../src/Store.bs.js");

var test = {
  name: "Marcus"
};

Store$ReasonStore.set("user", test);

var test2 = {
  name: "Janet"
};

Store$ReasonStore.set("user2", test2);

var marcus = Store$ReasonStore.get("user");

console.log(marcus);

var janet = Store$ReasonStore.get("user2");

console.log(janet);

console.log("hasNamespace", Store$ReasonStore.hasNamespace("test"));

Store$ReasonStore.each(function (value, namespacedKey) {
      console.log("logger", value, namespacedKey);
      
    });

exports.test = test;
exports.test2 = test2;
exports.marcus = marcus;
exports.janet = janet;
/*  Not a pure module */
