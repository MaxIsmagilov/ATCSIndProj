/// bar.hpp
/// this file has the definitions for a wishbone connecting two components

#pragma once

#include "coordinates.hpp"

namespace MSST {

class Bar {
public:
  coords::Coordinate first_end{0, 0, 0};
  coords::Coordinate second_end{0, 0, 0};
  double first_length;
  double second_length;
  coords::Coordinate get_end_coords() const;
};

} // namespace MSST