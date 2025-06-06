# Linkstamp compilation issue with `rules_cc`

See the problem description at https://github.com/bazelbuild/rules_cc/issues/415.

Repo "B" from the rules_cc bug is the `other` directory in this repo.

# Repro

* In git root (repo "A"):
    * `bazel build src/foo:foo` --> works
    * `bazel build src/foo:main` --> works
* In `other` (repo "B"):
    * `bazel build @foo//src/foo:foo` --> works
    * `bazel build @foo//src/foo:main` --> **fails**

