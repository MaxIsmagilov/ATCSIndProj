#! /bin/bash
echo "Building the project"
mkdir build
cmake -B ./build/ -DCMAKE_BUILD_TYPE=RELEASE
cmake --build ./build/ --config RELEASE
cd build
make  
echo "Running the Joukowsky Airfoil with parameters: dx = -0.08, dy = 0.08, pointcount = 1000"
./Executables/generate_joukowsky -0.08 0.08 1000 > out.csv
python3 ../Scripts/visualizer.py
echo "Exit the visualizer to continue"
echo "Running the Karman Trefftz Airfoil with parameters: dx = -0.08, dy = 0.08, pointcount = 1000, n = 1.94"
./Executables/generate_karman_trefftz -0.08 0.08 1000 1.94 > out.csv
python3 ../Scripts/visualizer.py
echo "Exit the visualizer to continue"
echo "Cleaning up"
rm out.csv
cd ../
echo "Done! (:"