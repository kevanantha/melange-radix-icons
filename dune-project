(lang dune 3.12)

(using melange 0.1)

(generate_opam_files true)

(name melange-radix-icons)

(source
 (github kevanantha/melange-radix-icons))

(authors "I Putu Kevin Anantha Vijaya <kevin.anantha@gmail.com>")

(maintainers "I Putu Kevin Anantha Vijaya <kevin.anantha@gmail.com>")

(homepage "https://github.com/kevanantha/melange-radix-icons")

(bug_reports "https://github.com/kevanantha/melange-radix-icons/issues")

(documentation "https://github.com/kevanantha/melange-radix-icons")

(license "MIT")

(package
 (name melange-radix-icons)
 (synopsis "Melange bindings for radix-icons")
 (depends
  (dune
   (>= 3.12))
  (melange
   (>= 2.1.0))
  (ocaml
   (>= 5.1.1))
  reason-react
  reason-react-ppx
  (melange-jest :with-test)
  (opam-check-npm-deps :with-test) ; todo: use with-dev-setup once opam 2.2 is out
  (ocaml-lsp-server :with-test) ; todo: use with-dev-setup once opam 2.2 is out
  (ocamlformat :with-test) ; todo: use with-dev-setup once opam 2.2 is out
  ))
