type item = {
  title: string,
  completed: bool,
};
type state = {
  items: list item,
};

let component = ReasonReact.statefulComponent "TodoApp";

let newItem () => {title: "Click a button", completed: true};

let se = ReasonReact.stringToElement;
let make children => {
  ...component,
  initialState: fun () => {
    items: [{
      title: "Write some things to do",
      completed: false,
    }]
  },
  render: fun {state: {items}} => {
    let numItems = List.length items;
    <div className="app">
      <div className="title">
        (se "What to do")
        <button
          onClick=(fun evt => Js.log "didn't add something")
        >
          (se "Add something")
        </button>
      </div>
      <div className="items">
        (se "Nothing")
      </div>
      <div className="footer">
        (se ((string_of_int numItems) ^ " items"))
      </div>
    </div>
  }
};