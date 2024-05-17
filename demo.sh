#! /bin/bash

mkdir build
cmake -B ./build/ -S ./code/ -DCMAKE_BUILD_TYPE=RELEASE
cmake --build ./build/ --config RELEASE
cd build
make  
Executables/_test > out.csv
python3 ../code/Scripts/visualizer.py
cd ../