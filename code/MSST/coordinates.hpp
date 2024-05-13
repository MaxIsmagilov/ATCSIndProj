/// coordinates.hpp
/// this file defines all coordinate and 3-d transform function
#pragma once

#include <cmath>

namespace MSST {

namespace coords {

class Coordinate {
public:
  double x{0}, y{0}, z{0};
  Coordinate(double t_x, double t_y, double t_z);
  Coordinate(Coordinate &other);
  Coordinate operator+(const Coordinate &other) const;
  Coordinate operator-(const Coordinate &other) const;
  Coordinate operator*(const double scale) const;
  Coordinate operator/(const double scale) const;
  double magnitude() const;
};

} // namespace coords

} // namespace MSST