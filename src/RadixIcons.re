module Accessibility = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AccessibilityIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ActivityLog = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ActivityLogIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AlignBaseline = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AlignBaselineIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AlignBottom = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AlignBottomIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AlignCenterHorizontally = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AlignCenterHorizontallyIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AlignCenterVertically = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AlignCenterVerticallyIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AlignLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AlignLeftIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AlignRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AlignRightIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AlignTop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AlignTopIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AllSides = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AllSidesIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Angle = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AngleIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Archive = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArchiveIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ArrowBottomLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArrowBottomLeftIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ArrowBottomRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArrowBottomRightIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ArrowDown = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArrowDownIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ArrowLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArrowLeftIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ArrowRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArrowRightIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ArrowTopLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArrowTopLeftIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ArrowTopRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArrowTopRightIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ArrowUp = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ArrowUpIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module AspectRatio = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AspectRatioIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Avatar = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "AvatarIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Backpack = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BackpackIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Badge = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BadgeIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BarChart = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BarChartIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Bell = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BellIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BlendingMode = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BlendingModeIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BookmarkFilled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BookmarkFilledIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Bookmark = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BookmarkIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderAll = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderAllIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderBottom = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderBottomIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderDashed = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderDashedIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderDotted = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderDottedIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderLeftIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderNone = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderNoneIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderRightIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderSolid = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderSolidIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderSplit = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderSplitIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderStyle = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderStyleIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderTop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderTopIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BorderWidth = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BorderWidthIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Box = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BoxIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module BoxModel = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "BoxModelIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Button = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ButtonIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Calendar = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CalendarIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Camera = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CameraIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CardStack = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CardStackIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CardStackMinus = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CardStackMinusIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CardStackPlus = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CardStackPlusIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CaretDown = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CaretDownIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CaretLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CaretLeftIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CaretRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CaretRightIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CaretSort = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CaretSortIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CaretUp = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CaretUpIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ChatBubble = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ChatBubbleIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CheckCircled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CheckCircledIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Check = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CheckIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Checkbox = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CheckboxIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ChevronDown = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ChevronDownIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ChevronLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ChevronLeftIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ChevronRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ChevronRightIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ChevronUp = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ChevronUpIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CircleBackslash = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CircleBackslashIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Circle = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CircleIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ClipboardCopy = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ClipboardCopyIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Clipboard = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ClipboardIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Clock = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ClockIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Code = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CodeIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CodeSandboxLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CodeSandboxLogoIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ColorWheel = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ColorWheelIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ColumnSpacing = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ColumnSpacingIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Columns = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ColumnsIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Commit = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CommitIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Component1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Component1Icon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Component2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Component2Icon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ComponentBoolean = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ComponentBooleanIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ComponentInstance = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ComponentInstanceIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ComponentNone = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ComponentNoneIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ComponentPlaceholder = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ComponentPlaceholderIcon";
  };

  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Container = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ContainerIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Cookie = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CookieIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Copy = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CopyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CornerBottomLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CornerBottomLeftIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CornerBottomRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CornerBottomRightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CornerTopLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CornerTopLeftIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CornerTopRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CornerTopRightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Corners = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CornersIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CountdownTimer = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CountdownTimerIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CounterClockwiseClock = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CounterClockwiseClockIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Crop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CropIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Cross1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Cross1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Cross2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Cross2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CrossCircled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CrossCircledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Crosshair1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Crosshair1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};
module Crosshair2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Crosshair2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CrumpledPaper = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CrumpledPaperIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Cube = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CubeIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CursorArrow = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CursorArrowIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module CursorText = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "CursorTextIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Dash = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DashIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Dashboard = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DashboardIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Desktop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DesktopIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Dimensions = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DimensionsIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Disc = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DiscIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DiscordLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DiscordLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DividerHorizontal = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DividerHorizontalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DividerVertical = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DividerVerticalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DotFilled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DotFilledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Dot = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DotIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DotsHorizontal = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DotsHorizontalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DotsVertical = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DotsVerticalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DoubleArrowDown = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DoubleArrowDownIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DoubleArrowLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DoubleArrowLeftIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DoubleArrowRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DoubleArrowRightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DoubleArrowUp = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DoubleArrowUpIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Download = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DownloadIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DragHandleDots1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DragHandleDots1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DragHandleDots2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DragHandleDots2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DragHandleHorizontal = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DragHandleHorizontalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DragHandleVertical = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DragHandleVerticalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DrawingPinFilled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DrawingPinFilledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DrawingPin = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DrawingPinIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module DropdownMenu = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "DropdownMenuIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module EnterFullScreen = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "EnterFullScreenIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Enter = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "EnterIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module EnvelopeClosed = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "EnvelopeClosedIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module EnvelopeOpen = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "EnvelopeOpenIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Eraser = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "EraserIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ExclamationTriangle = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ExclamationTriangleIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ExitFullScreen = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ExitFullScreenIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Exit = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ExitIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ExternalLink = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ExternalLinkIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module EyeClosed = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "EyeClosedIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module EyeNone = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "EyeNoneIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module EyeOpen = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "EyeOpenIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Face = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FaceIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FigmaLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FigmaLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module File = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FileIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FileMinus = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FileMinusIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FilePlus = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FilePlusIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FileText = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FileTextIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FontBold = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FontBoldIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FontFamily = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FontFamilyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FontItalic = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FontItalicIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FontRoman = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FontRomanIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FontSize = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FontSizeIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FontStyle = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FontStyleIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Frame = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FrameIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module FramerLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "FramerLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Gear = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "GearIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module GitHubLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "GitHubLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Globe = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "GlobeIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Grid = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "GridIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Group = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "GroupIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Half1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Half1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Half2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Half2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module HamburgerMenu = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "HamburgerMenuIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Hand = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "HandIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Heading = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "HeadingIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module HeartFilled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "HeartFilledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Heart = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "HeartIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Height = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "HeightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module HobbyKnife = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "HobbyKnifeIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Home = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "HomeIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module IconJarLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "IconJarLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module IdCard = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "IdCardIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Image = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ImageIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module InfoCircled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "InfoCircledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Input = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "InputIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module InstagramLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "InstagramLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Keyboard = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "KeyboardIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LapTimer = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LapTimerIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Laptop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LaptopIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Layers = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LayersIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Layout = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LayoutIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LetterCaseCapitalize = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LetterCaseCapitalizeIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LetterCaseLowercase = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LetterCaseLowercaseIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LetterCaseToggle = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LetterCaseToggleIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LetterCaseUppercase = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LetterCaseUppercaseIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LetterSpacing = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LetterSpacingIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LightingBolt = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LightingBoltIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LineHeight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LineHeightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Link1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Link1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Link2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Link2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LinkBreak1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LinkBreak1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LinkBreak2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LinkBreak2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LinkNone1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LinkNone1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LinkNone2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LinkNone2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LinkedInLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LinkedInLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ListBullet = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ListBulletIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LockClosed = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LockClosedIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LockOpen1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LockOpen1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module LockOpen2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LockOpen2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Loop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "LoopIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module MagicWand = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MagicWandIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module MagnifyingGlass = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MagnifyingGlassIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Margin = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MarginIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module MaskOff = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MaskOffIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module MaskOn = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MaskOnIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module MinusCircled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MinusCircledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Minus = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MinusIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Mix = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MixIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module MixerHorizontal = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MixerHorizontalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module MixerVertical = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MixerVerticalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Mobile = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MobileIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ModulzLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ModulzLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Moon = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MoonIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Move = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "MoveIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module NotionLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "NotionLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Opacity = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "OpacityIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module OpenInNewWindow = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "OpenInNewWindowIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Overline = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "OverlineIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Padding = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PaddingIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module PaperPlane = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PaperPlaneIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Pause = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PauseIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Pencil1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Pencil1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Pencil2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Pencil2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Person = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PersonIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module PieChart = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PieChartIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Pilcrow = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PilcrowIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module PinBottom = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PinBottomIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module PinLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PinLeftIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module PinRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PinRightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module PinTop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PinTopIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Play = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PlayIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module PlusCircled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PlusCircledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Plus = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "PlusIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module QuestionMarkCircled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "QuestionMarkCircledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module QuestionMark = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "QuestionMarkIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Quote = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "QuoteIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Radiobutton = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "RadiobuttonIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Reader = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ReaderIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Reload = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ReloadIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Reset = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ResetIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Resume = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ResumeIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Rocket = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "RocketIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module RotateCounterClockwise = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "RotateCounterClockwiseIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module RowSpacing = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "RowSpacingIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Row = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "RowIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module RulerHorizontal = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "RulerHorizontalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module RulerSquare = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "RulerSquareIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Scissors = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ScissorsIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Section = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SectionIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SewingPinFilled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SewingPinFilledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SewingPin = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SewingPinIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Shadow = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ShadowIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ShadowInner = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ShadowInnerIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ShadowNone = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ShadowNoneIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ShadowOuter = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ShadowOuterIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Share1 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Share1Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Share2 = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "Share2Icon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Shuffle = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ShuffleIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Size = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SizeIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SketchLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SketchLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Slash = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SlashIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Slider = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SliderIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SpaceBetweenHorizontally = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SpaceBetweenHorizontallyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SpaceBetweenVertically = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SpaceBetweenVerticallyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SpaceEvenlyHorizontally = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SpaceEvenlyHorizontallyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SpaceEvenlyVertically = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SpaceEvenlyVerticallyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SpeakerLoud = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SpeakerLoudIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SpeakerModerate = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SpeakerModerateIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SpeakerOff = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SpeakerOffIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module SpeakerQuiet = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SpeakerQuietIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Square = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SquareIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Stack = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StackIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module StarFilled = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StarFilledIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Star = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StarIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module StitchesLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StitchesLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Stop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StopIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Stopwatch = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StopwatchIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module StretchHorizontally = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StretchHorizontallyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module StretchVertically = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StretchVerticallyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Strikethrough = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "StrikethroughIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Sun = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SunIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Switch = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SwitchIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Symbol = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "SymbolIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Table = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TableIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Target = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TargetIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TextAlignBottom = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextAlignBottomIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TextAlignCenter = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextAlignCenterIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TextAlignJustify = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextAlignJustifyIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TextAlignLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextAlignLeftIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TextAlignMiddle = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextAlignMiddleIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TextAlignRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextAlignRightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TextAlignTop = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextAlignTopIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Text = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TextNone = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TextNoneIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ThickArrowDown = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ThickArrowDownIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ThickArrowLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ThickArrowLeftIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ThickArrowRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ThickArrowRightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ThickArrowUp = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ThickArrowUpIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Timer = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TimerIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Tokens = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TokensIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TrackNext = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TrackNextIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TrackPrevious = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TrackPreviousIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Transform = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TransformIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TransparencyGrid = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TransparencyGridIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Trash = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TrashIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TriangleDown = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TriangleDownIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TriangleLeft = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TriangleLeftIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TriangleRight = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TriangleRightIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TriangleUp = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TriangleUpIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module TwitterLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "TwitterLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Underline = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "UnderlineIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Update = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "UpdateIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Upload = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "UploadIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Value = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ValueIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ValueNone = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ValueNoneIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module VercelLogo = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "VercelLogoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Video = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "VideoIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ViewGrid = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ViewGridIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ViewHorizontal = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ViewHorizontalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ViewNone = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ViewNoneIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ViewVertical = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ViewVerticalIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module Width = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "WidthIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ZoomIn = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ZoomInIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};

module ZoomOut = {
  module Comp = {
    [@mel.module "@radix-ui/react-icons"] [@react.component]
    external make:
      (~color: string=?, ~className: string=?, ~ref: ReactDOM.domRef=?) =>
      React.element =
      "ZoomOutIcon";
  };
  [@react.component]
  let make =
    React.forwardRef((~color="currentColor", ~className="", _ref) =>
      <Comp
        color
        className
        ref=?{
          Js.Nullable.toOption(_ref)->Belt.Option.map(ReactDOM.Ref.domRef)
        }
      />
    );
};
