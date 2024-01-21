# melange-radix-icons

> [Melange](https://github.com/melange-re/melange) bindings for [Radix Icons](https://www.radix-ui.com/icons)

## Install

Install [opam](https://opam.ocaml.org/) package manager.

Currently, this package has not been published on opam-repository. see this [link](https://ocaml.org/docs/managing-dependencies#adding-dependencies-from-a-git-repository) for adding deps from a git repository

Then:

```sh
npm run @radix-ui/react-icons
```


# Usage

Add `melange-radix-icons` to the `libraries` in your `dune` file:

```lisp
; ...
(libraries melange-radix-icons)
; ...
```

Use it in your component:

```re
[@react.component]
let make = () => {
  <RadixIcons.Sun
    className="h-[1.2rem] w-[1.2rem] rotate-0 scale-100 transition-all dark:-rotate-90 dark:scale-0"
  />
}
```

