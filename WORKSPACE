load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")


######## Abseil ##############
http_archive(
  name = "absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/20200923.3.zip"],
  strip_prefix = "abseil-cpp-20200923.3",
)

######## Google Test #########
git_repository(
    name = "gtest",
    remote = "https://github.com/google/googletest",
    branch = "v1.10.x",
)

######## Google Log ##########
http_archive(
    name = "com_github_gflags_gflags",
    sha256 = "34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf",
    strip_prefix = "gflags-2.2.2",
    urls = ["https://github.com/gflags/gflags/archive/v2.2.2.tar.gz"],
)

http_archive(
    name = "com_github_google_glog",
    sha256 = "62efeb57ff70db9ea2129a16d0f908941e355d09d6d83c9f7b18557c0a7ab59e",
    strip_prefix = "glog-d516278b1cd33cd148e8989aec488b6049a4ca0b",
    urls = ["https://github.com/google/glog/archive/d516278b1cd33cd148e8989aec488b6049a4ca0b.zip"],
)

###### Protocol Buffer #######
http_archive(
    name = "com_google_protobuf",
    strip_prefix = "protobuf-3.13.0",
    urls = ["https://github.com/protocolbuffers/protobuf/archive/v3.13.0.tar.gz"],
)

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()


########## Alpaca API ##########
http_archive(
    name = "com_github_marpaia_alpaca_trade_api_cpp",
    strip_prefix = "alpaca-trade-api-cpp-0.0.3",
    urls = ["https://github.com/marpaia/alpaca-trade-api-cpp/archive/refs/tags/v0.0.3.zip"],
)

load("@com_github_marpaia_alpaca_trade_api_cpp//bazel:deps.bzl", "alpaca_deps")
alpaca_deps()
