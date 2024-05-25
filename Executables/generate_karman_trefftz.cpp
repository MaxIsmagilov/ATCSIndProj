#include "../src/karman_trefftz.hpp"
#include <iostream>
#include <sstream>

int main(int argc, char *argv[]) {
  // Check if the correct number of command line arguments is provided
  if (argc != 5) {
    std::cerr
        << "Usage: " << argv[0]
        << " <dx> <dy> <pointcount> <n>\nwhere dx and dy are the transforms "
           "of the original complex circle and pointcount is the number "
           "of points desired and n is the parameter for the karman-trefftz "
           "transform that determines the trailing edge angle"
        << std::endl;
    return 1;
  }

  std::ostringstream oss{};

  double dx = std::stod(argv[1]), dy = std::stod(argv[2]),
         n = std::stod(argv[4]);
  int pointcount = std::stoi(argv[3]);

  // Generate the coordinates using the karman-trefftz function
  auto coordinates = AirfoilTools::Karman_Trefftz::karman_trefftz_transform(
      dx, dy, pointcount, n);

  // print the coordinates to oss
  for (auto &&i : coordinates) {
    oss << i.real() << ';' << i.imag() << '\n';
  }

  std::cout << oss.str();

  return 0;
}