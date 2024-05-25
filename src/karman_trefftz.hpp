#pragma once

#include "defs.hpp"

namespace AirfoilTools::Karman_Trefftz {

/// @brief does a joukowsky transform on a circle
/// @param dx the shift to the right in a circle (generally negative)
/// @param dy the shift up/down, controls the camber of the airfoil
/// @param pointcount the number of points in the resulting airfoil
/// @param n an additional parameter controlling the trailing edge angle; the
/// angle can be found by the formula (2-n) * 180. n = 1 is a circle, while n =
/// 2 deteriorates into the joukowsky transform. generally, n is set a bit lower
/// than 2, e. g. 1.95
/// @return a new complex vector but transformed
complex_vector karman_trefftz_transform(double dx, double dy, double pointcount,
                                        double n);

} // namespace AirfoilTools::Karman_Trefftz
