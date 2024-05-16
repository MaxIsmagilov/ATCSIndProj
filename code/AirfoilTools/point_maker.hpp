#pragma once

#include <complex>
#include <vector>

#include "defs.hpp"

namespace AirfoilTools::PointMaker {

/// @brief generates a circle
/// this circle will intersect the point 1 + 0i
/// @param dx the scale in the x direction, must be less than 0
/// @param dy
/// @param pointcount
/// @return a vector of complex numbers
complex_vector make_points(double dx, double dy, int pointcount);

} // namespace AirfoilTools::PointMaker
