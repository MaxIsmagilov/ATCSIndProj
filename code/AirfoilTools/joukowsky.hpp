#pragma once

#include "defs.hpp"

namespace AirfoilTools::Joukowsky {

/// @brief does a joukowsky transform on a circle
/// @param dx the shift to the right in a circle (generally negative)
/// @param dy the shift up/down, controls the camber of the airfoil
/// @param pointcount the number of points in the resulting airfoil
/// @return a new complex vector but transformed
complex_vector joukowsky_transform(double dx, double dy, int pointcount);

} // namespace AirfoilTools::Joukowsky
