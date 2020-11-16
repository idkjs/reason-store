'use strict';

var Store = require("store");

function set(key, value) {
  return Store.set(key, value);
}

function get(key) {
  return Store.get(key);
}

function remove(key) {
  return Store.remove(key);
}

function each(fn) {
  return Store.each(fn);
}

function clearAll(param) {
  return Store.clearAll();
}

function hasNamespace(namespace) {
  return Store.hasNamespace(namespace);
}

function store(param) {
  return Store;
}

function createStore(param) {
  Store.createStore();
  
}

exports.set = set;
exports.get = get;
exports.remove = remove;
exports.each = each;
exports.clearAll = clearAll;
exports.store = store;
exports.createStore = createStore;
exports.hasNamespace = hasNamespace;
/* store Not a pure module */
