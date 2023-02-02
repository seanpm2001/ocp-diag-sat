load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_google_absl",
    sha256 = "8700b3f89e4652a2bfed3a0c936d93ab4e50e5c778ba9bbca106fb93d581d3b8",
    strip_prefix = "abseil-cpp-dcaed1a05a813e95b65219e0d1f6a2a684e13028",
    url = "https://github.com/abseil/abseil-cpp/archive/dcaed1a05a813e95b65219e0d1f6a2a684e13028.zip",  # 2022-11-08
)

http_archive(
    name = "bazel_skylib",
    sha256 = "a22290c26d29d3ecca286466f7f295ac6cbe32c0a9da3a91176a90e0725e3649",
    strip_prefix = "bazel-skylib-5bfcb1a684550626ce138fe0fe8f5f702b3764c3",
    urls = ["https://github.com/bazelbuild/bazel-skylib/archive/5bfcb1a684550626ce138fe0fe8f5f702b3764c3.zip"],  # 2022-11-16
)

http_archive(
    name = "platforms",
    sha256 = "b4a3b45dc4202e2b3e34e3bc49d2b5b37295fc23ea58d88fb9e01f3642ad9b55",
    strip_prefix = "platforms-3fbc687756043fb58a407c2ea8c944bc2fe1d922",
    urls = ["https://github.com/bazelbuild/platforms/archive/3fbc687756043fb58a407c2ea8c944bc2fe1d922.zip"],  # 2022-11-09
)

http_archive(
    name = "ocp_diag_core",
    sha256 = "b9039d2c754abe0fadc11a636035f1fb7fb37582c333554a42ba415c72294004",
    strip_prefix = "ocp-diag-core-cd9ed427ab0a081cee639a59e6059f91820c4767/apis/c++",
    urls = ["https://github.com/opencomputeproject/ocp-diag-core/archive/cd9ed427ab0a081cee639a59e6059f91820c4767.zip"],  # 2023-02-23
)

load("@ocp_diag_core//ocpdiag:build_deps.bzl", "load_deps")

load_deps("ocp_diag_core/")

load("@ocp_diag_core//ocpdiag:secondary_build_deps.bzl", "load_secondary_deps")

load_secondary_deps()

load("@ocp_diag_core//ocpdiag:tertiary_build_deps.bzl", "load_tertiary_deps")

load_tertiary_deps()
