
let component = ReasonReact.statelessComponent "TodoList";

let make children => {
  ...component,
  render: fun () self => {
    <div className="app">
      <div className="title">
        (ReasonReact.stringToElement "What to do")
      </div>
      <div className="items">
        (ReasonReact.stringToElement "Nothing")
      </div>
    </div>
  }
};
