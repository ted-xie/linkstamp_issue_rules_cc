genrule(
    name = "ersatz_foo",
    srcs = ["@foo//src/foo"],
    outs = ["foo.tar"],
    cmd = "tar cf $@ $(locations @foo//src/foo)",
)

genrule(
    name = "ersatz_main",
    srcs = ["@foo//src/foo:main"],
    outs = ["main"],
    cmd = "cp $< $@",
)
