// module Styles = {
//   let reasonReactBlue = "#48a9dc";
//   let style = {j|
//   body {
//     background-color: rgb(224, 226, 229);
//     display: flex;
//     flex-direction: column;
//     align-items: center;
//   }
//   button {
//     background-color: white;
//     color: $reasonReactBlue;
//     box-shadow: 0 0 0 1px $reasonReactBlue;
//     border: none;
//     padding: 8px;
//     font-size: 16px;
//   }
//   button:active {
//     background-color: $reasonReactBlue;
//     color: white;
//   }
//   .container {
//     margin: 12px 0px;
//     box-shadow: 0px 4px 16px rgb(200, 200, 200);
//     width: 720px;
//     border-radius: 12px;
//     font-family: sans-serif;
//   }
//   .containerTitle {
//     background-color: rgb(242, 243, 245);
//     border-radius: 12px 12px 0px 0px;
//     padding: 12px;
//     font-weight: bold;
//   }
//   .containerContent {
//     background-color: white;
//     padding: 16px;
//     border-radius: 0px 0px 12px 12px;
//   }
// |j};
// };

// [@bs.val] external document: Js.t({..}) = "document";

// let style = document##createElement("style");
// document##head##appendChild(style);
// style##innerHTML #= Styles.style;

// let makeContainer = text => {
//   let container = document##createElement("div");
//   container##className #= "container";

//   let title = document##createElement("div");
//   title##className #= "containerTitle";
//   title##innerText #= text;

//   let content = document##createElement("div");
//   content##className #= "containerContent";

//   let () = container##appendChild(title);
//   let () = container##appendChild(content);
//   let () = document##body##appendChild(container);

//   content;
// };
// module Example = {
//   // Store current
//   type user = {name: string};

//   // let set = (key, value) => store##set(~key, ~value);
//   // Js.log2("store##name",store##name);
//   let test = {name: "Marcus"};
//   Store.set("user", test);
//   let test2 = {"name": "Marcus2"};
//   Store.set("user2", test2);

//   Js.log2("hasNamespace", Store.hasNamespace(~namespace="test"));
//   // Get current user
//   let user = Store.get("user");
//   Js.log(user);
//   let x = Store.createStore();
//   Js.log2("createStore", x);
//   // Get current user
//   let user = Store.get("user2");
//   Js.log(user);
//   // Js.log(store##get(~key="user")->Js.Nullable.toOption == Some({"name":"Marcus"}->Js.Json.string));

//   // Remove current user
//   // Store.remove("user")

//   // Clear all keys
//   // Store.clearAll()->ignore

//   // Loop over all Stored values
//   // let fn = (~valuee: 'a, ~namespacedKey: string) =>
//   //   Js.log3("logger", valuee, namespacedKey);
//   Store.each((~value: 'a, ~namespacedKey: string) =>
//     Js.log3("logger", value, namespacedKey)
//   );

//   [@react.component]
//   let make = () => {
//     let (show, setShow) = React.useState(() => true);

//     // Notice that instead of `useEffect`, we have `useEffect0`. See
//     // reasonml.github.io/reason-react/docs/en/components#hooks for more info
//     React.useEffect0(() => {
//       let id =
//         Js.Global.setInterval(
//           () => setShow(previousShow => !previousShow),
//           1000,
//         );

//       Some(() => Js.Global.clearInterval(id));
//     });

//     let style =
//       if (show) {
//         ReactDOMRe.Style.make(~opacity="1", ~transition="opacity 1s", ());
//       } else {
//         ReactDOMRe.Style.make(~opacity="0", ~transition="opacity 1s", ());
//       };

//     <div style> "Check the console"->React.string </div>;
//   };
// };
// ReactDOMRe.render(<Example />, makeContainer("Reason Store"));

  type user = {name: string};

  // let set = (key, value) => store##set(~key, ~value);
  // Js.log2("store##name",store##name);
  let test = {name: "Marcus"};
  Store.set("user", test);
  let test2 = {"name": "Marcus2"};
  Store.set("user2", test2);

  Js.log2("hasNamespace", Store.hasNamespace(~namespace="test"));
  // Get current user
  let user = Store.get("user");
  Js.log(user);
  let x = Store.createStore();
  Js.log2("createStore", x);
  // Get current user
  let user = Store.get("user2");
  Js.log(user);
  // Js.log(store##get(~key="user")->Js.Nullable.toOption == Some({"name":"Marcus"}->Js.Json.string));

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