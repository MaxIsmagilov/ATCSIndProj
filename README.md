# Max Ismagilov's Airfoil Generator

last updated May 17, 2024

## Overview

This utility, developed by Max Ismagilov, uses a few variables to generate an airfoil as defined by some transform equations.
Here is a list of transforms that will be used:
 - [Joukowsky](docs/joukowsky.md)
 - [Kármán-Trefftz](docs/karman-trefftz.md)

## Github directory

The official github directory can be found [here](https://github.com/MaxIsmagilov/ATCSIndProj).

## User Instructions

Please refer to [the how-to section](docs/howto.md) for installation instructions.
For a standalone demonstration, run `demo.sh`.

## Dependencies

This project uses CMake to build the library and executables. CMake generates scripts for other buildsystems such as ninja or Make, which will also need to be installed. Make is recommended for beginners.