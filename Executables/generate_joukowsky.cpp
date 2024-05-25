#include "../src/joukowsky.hpp"
#include <iostream>
#include <sstream>

int main(int argc, char *argv[]) {
  // Check if the correct number of command line arguments is provided
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0]
              << " <dx> <dy> <pointcount>\nwhere dx and dy are the transforms "
                 "of the original complex circle and pointcount is the number "
                 "of points desired"
              << std::endl;
    return 1;
  }

  std::ostringstream oss{};

  double dx = std::stod(argv[1]), dy = std::stod(argv[2]);
  int pointcount = std::stoi(argv[3]);

  // Generate the coordinates using the joukowsky function
  auto coordinates =
      AirfoilTools::Joukowsky::joukowsky_transform(dx, dy, pointcount);

  // print the coordinates to oss
  for (auto &&i : coordinates) {
    oss << i.real() << ';' << i.imag() << '\n';
  }

  std::cout << oss.str();

  return 0;
}