cc_library(
  name = "data_client",
  hdrs = ["data_client.h"],
  srcs = ["data_client.cc"],
  visibility = ["//visibility:public"],
  deps = [
      "@absl//absl/container:flat_hash_map",
      "@absl//absl/flags:flag",
      "@absl//absl/status",
      "@com_github_google_glog//:glog",
  ],
  linkopts = ["-lpthread",
              "-lboost_system",
              "-lssl",
              "-lcrypto",
  ],
)

cc_library(
  name = "agg_data",
  hdrs = ["agg_data.h"],
  srcs = ["agg_data.cc"],
  deps = [
    "//proto:data_cc_proto",
    "@absl//absl/container:flat_hash_map",
    "@absl//absl/flags:flag",
    "@absl//absl/status",
    "@com_github_google_glog//:glog",
  ],
)

cc_library(
  name = "data_handler",
  hdrs = ["data_handler.h"],
  srcs = ["data_handler.cc"],
  visibility = ["//visibility:public"],
  deps = [
    ":agg_data",
    ":data_client",
    "//proto:data_cc_proto",
    "@absl//absl/container:flat_hash_map",
    "@absl//absl/container:inlined_vector",
    "@absl//absl/status",
    "@com_github_google_glog//:glog",
  ],
)

cc_library(
  name = "data_handler_testutil",
  hdrs = ["data_handler_testutil.h"],
  srcs = ["data_handler_testutil.cc"],
  visibility = ["//visibility:public"],
  deps = [
    "@com_github_google_glog//:glog",
  ],
  linkopts = ["-lboost_system",],
)

cc_test(
  name = "data_client_test",
  srcs = ["data_client_test.cc"],
  deps = [
      ":data_client",
      "//alpaca:alpaca",
      "//cpp-httplib:httplib",
      "@absl//absl/flags:flag",
      "@com_github_google_glog//:glog",
      "@gtest//:gtest",
  ],
)

cc_test(
  name = "agg_data_test",
  srcs = ["agg_data_test.cc"],
  deps = [
    ":agg_data",
    ":data_handler_testutil",
    "@absl//absl/status",
    "@com_google_protobuf//:protobuf",
    "@com_github_google_glog//:glog",
    "@gtest//:gtest",
  ],
)

cc_test(
  name = "data_handler_test",
  srcs = ["data_handler_test.cc"],
  deps = [
    ":data_handler",
    ":data_handler_testutil",
    "@absl//absl/status",
    "@com_github_google_glog//:glog",
    "@gtest//:gtest",
  ],
)

