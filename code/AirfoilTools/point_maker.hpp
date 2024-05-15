#pragma once

#include <complex>
#include <vector>

#include "defs.hpp"

namespace AirfoilTools::PointMaker {

/// @brief generates a circle
/// @param dx
/// @param dy
/// @param pointcount
/// @return a vector of complex numbers
complex_vector make_points(double dx, double dy, double pointcount);

} // namespace AirfoilTools::PointMaker
