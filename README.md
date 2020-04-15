# cpp_base_project

A template C++ project for starting out. This takes inspiration from Jason Turner's [cpp_starter_project](https://github.com/lefticus/cpp_starter_project), but has been created from scratch for a more fine-tuned experience.

## Language Standards

As of the last modification to this README, the C++ standard used will be C++17. This will be updated as new standards are released and more fully supported. This can be easily changed in the source files and as a new standard approaches, a branch for that standard will be created.

## Supported Platforms

This project should support (at the very least) GNU/Linux, macOS, and Windows.

Support for Android and the BSDs (FreeBSD, NetBSD, OpenBSD, in particular) are not the primary targets for this project, but should be at least mostly compatible with some minor changes.

### Compiler Support

This project supports the following platform/compiler pairs:

| Platform | Compiler |
| --- | --- |
| GNU/Linux | clang/clang++ |
| GNU/Linux | gcc/g++ |
| macOS | clang/clang++ (Xcode) |
| Windows 7/8/8.1/10 | clang/clang++ (Clang/LLVM) |
| Windows 7/8/8.1/10 | clang/clang++ (Clang/MSVC) |
| Windows 7/8/8.1/10 | clang/clang++ (Cygwin) |
| Windows 7/8/8.1/10 | gcc/g++ (Cygwin) |
| Windows 7/8/8.1/10 | gcc/g++ (MinGW) |
| Windows 7/8/8.1/10 | gcc/g++ (MSYS2) |
| Windows 7/8/8.1/10 | cl.exe (Visual Studio 2017+) |

Any platform/compiler pair not listed _may_ work but has not been thoroughly tested.

## Buildsystems

This project includes both Meson and CMake as options for a build system. While Meson has been my go-to build system for a while now, CMake is the closest thing to an industry standard (at least when it comes to cross-platform support) and it is reasonable to include that as well. If you plan on sticking to one of these build systems, simply delete the respective `meson.build` or `CMakeLists.txt` files (if not using CMake, you may also delete any `cmake/` directories).

## Features

This project will include a few key components:

- Buildsystem files
  - Relevant Meson and/or CMake files for clean and easy-to-understand builds as well as efficient compilation and linking
- Project structure
  - A project layout consisting of buildsystem files, configuration files, source files, header files, scripts & tools, testing files, etc. all properly placed in the appropriate directories
- Tests
  - Examples of unit and integration tests as well as fuzz testing, static testing, static analysis, dynamic analysis, etc.
- CI/CD
  - Utilizing tools like GitHub actions and/or Travis and/or coverage tools to provide a boilerplate for their usage
- GitHub (and possibly GitLab via a branch/fork) repository features like Issues, Wikis, Templates, Pages, etc.
- Documentation via Doxygen (see [docs](docs/index.html))
- Boilerplates for other project files
  - README (this document)
  - [License file](LICENSE)
  - [Contribution guide](CONTRIBUTING.md)
  - [Code of conduct](CODE_OF_CONDUCT.md)
  - [Installation/build instructions](INSTALL.md)
  - [Changelog](CHANGELOG.md)
  - [A Git ignore file](.gitignore)
  - [`clang_format`](.clang-format) and [`clang_tidy`](.clang-tidy) files

## Contributing

The first, best thing you can do, is submit and Issue for any additional features, bugs, or suggestions. I will also hopefully have documentation and a Wiki available.

Please follow the [contribution guide](CONTRIBUTING.md) for making contributions to this project. This document will include instructions for contributing, as well as a style guide and a list of best practices.
