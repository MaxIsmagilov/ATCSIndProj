/// bar.hpp
/// this file has the definitions for a bar connecting two components

#pragma once

#include "coordinates.hpp"

namespace MSST {

class Bar {
public:
  coords::Coordinate fixed{0, 0, 0};
  coords::Coordinate end{0, 0, 0};
};

} // namespace MSST