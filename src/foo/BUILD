load("@rules_cc//cc:cc_binary.bzl", "cc_binary")
load("@rules_cc//cc:cc_library.bzl", "cc_library")

cc_library(
    name = "foo",
    linkstamp = "build_embed.cc",
    srcs = ["foo.cc"],
    hdrs = ["build_embed.h", "foo.h"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "main",
    deps = [":foo"],
    srcs = ["main.cc"],
    visibility = ["//visibility:public"],
)
