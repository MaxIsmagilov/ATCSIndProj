# How-To's

## Installation as a Library

Using CMake, installing this library into your own should be easy. Use a normal `INCLUDE_SUBDIRECTORY` call in your third-party folder or use a `FETCH_CONTENT_DELCARE` call to get the latest version directly from github.

## Building it

Use your normal CMake procedure.
For beginners, here is how to build it from the ATCSIndProj directory:

```sh
$ mkdir build
$ cmake -B ./build/ -DCMAKE_BUILD_TYPE=RELEASE
$ cmake --build ./build/ --config RELEASE
$ cd build
$ make
```

## Use as a standalone

This project also generates two executables into `build/Executables/`:
 - `generate_joukowsky <dx> <dy> <pointcount>`
 - `generate_karman_trefftz <dx> <dy> <pointcount> <n>`
Run these executables without any command line arguments if you need help with discerning them. Please also check out the [Joukowsky transform explanation](joukowsky.md) and the [Karman-Trefftz transform explanation](karman-trefftz.md).

#### Back to README:

[README](../README.md)




