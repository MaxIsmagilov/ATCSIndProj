#include "coordinates.hpp"

namespace MSST::coords {

Coordinate::Coordinate(double t_x, double t_y, double t_z)
    : x{t_x}, y{t_y}, z{t_z} {}

Coordinate::Coordinate(Coordinate &other)
    : x{other.x}, y{other.y}, z{other.z} {}

Coordinate Coordinate::operator+(const Coordinate &other) const {
  return {x + other.x, y + other.y, z + other.z};
}

Coordinate Coordinate::operator-(const Coordinate &other) const {
  return {x - other.x, y - other.y, z - other.z};
}

Coordinate Coordinate::operator*(const double scale) const {
  return {x * scale, y * scale, z * scale};
}

Coordinate Coordinate::operator/(const double scale) const {
  return {x / scale, y / scale, z / scale};
}

double Coordinate::magnitude() const { return sqrt(x * x + y * y + z * z); }

} // namespace MSST::coords