# Max Ismagilov's Airfoil Generator

last updated May 24, 2024

## Overview

This utility, developed by Max Ismagilov, uses a few variables to generate an airfoil as defined by some transform equations.
Here is a list of transforms that will be used:
 - [Joukowsky](docs/joukowsky.md)
 - [Kármán-Trefftz](docs/karman-trefftz.md)

## Github directory

The official github directory can be found [here](https://github.com/MaxIsmagilov/ATCSIndProj).

## User Instructions

Please refer to [the how-to section](docs/howto.md) for installation instructions.
For a standalone demonstration, run `$ demo.sh`.

## Dependencies

This project uses CMake to build the library and executables. CMake generates scripts for other buildsystems such as ninja or Make, which will also need to be installed. Make is recommended for beginners (or Mr. White).

## Future Plans

It would be interesting to investigate the velocity field transforms and possibly other airfoil generation methods; this could be more useful if that were to be done. In addition, it could be intriguing to link this project with a SOLDIWORKS spline generator to create airfoils in CAD. Such a tool already exists for Fusion360, and I have personally found it quite useful. 

## Additional Project Links

My Checkers engine was also redone during this time. The link for this project is [on GitHub](https://github.com/MaxIsmagilov/BobCheckers).
This engine beat oxidie_checkers (or ferricheck) on May 24, 2024. It has been both refactored, updated, and extensively tested!

