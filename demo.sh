#! /bin/bash

mkdir build
cmake -B ./build/ -DCMAKE_BUILD_TYPE=RELEASE
cmake --build ./build/ --config RELEASE
cd build
make  
Executables/_test > out.csv
python3 ../Scripts/visualizer.py
cd ../