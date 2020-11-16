# Bindings for [marcuswestin/store.js](https://github.com/marcuswestin/store.js)

# **VERY WIP**

This is:

- A template for your new ReasonReact project.
- A collection of thin examples illustrating ReasonReact usage.
- Extra helper documentation for ReasonReact (full ReasonReact docs [here](https://reasonml.github.io/reason-react/)).

`src` contains 4 sub-folders, each an independent, self-contained ReasonReact example. Feel free to delete any of them and shape this into your project! This template's more malleable than you might be used to =).

The point of this template and examples is to let you understand and personally tweak the entirely of it. We **don't** give you an opaque, elaborate mega build setup just to put some boxes on the screen. It strikes to stay transparent, learnable, and simple. You're encouraged to read every file; it's a great feeling, having the full picture of what you're using and being able to touch any part.

## Run

```sh
npm install
npm run watch
# in a new tab
npm run example
```

Open a new web page to `http://localhost:8000/`. Change any `.re` file in `example/` to try stuff out.

Store.js provides basic key/value storage functionality (`get/set/remove/each`) as well as a rich set of plug-in [storages](#user-content-storages) and extra [functionality](#user-content-plugins).

1. [Basic Usage](#user-content-basic-usage)
   - All you need to get started
   - [API](#user-content-api)
   - [Installation](#user-content-installation)
2. [Supported Browsers](#user-content-supported-browsers)

## Basic Usage

All you need to know to get started:

### API

Exposes a simple API for cross-browser local storage:

```re
// Store current user
let test = {name: "Marcus"};
Store.set("user", test);

let test2 = {"name": "Janet"};
Store.set("user2", test2);

// Get current user
let marcus = Store.get("user");
Js.log(marcus);

let janet = Store.get("user2");
Js.log(janet);

// Remove current user
Store.remove("user")

// Clear all keys
Store.clearAll()->ignore

// Loop over all stored values
let fn = (~value: 'a, ~namespacedKey: string) =>
  Js.log3("logger", value, namespacedKey);

Store.each(fn);

```

### Installation

Using npm:

```sh
npm i reason-store
```
