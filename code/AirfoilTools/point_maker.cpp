#include "point_maker.hpp"

#include <cmath>
#include <numbers>

namespace AirfoilTools::PointMaker {

complex_vector make_points(double dx, double dy, double pointcount) {
  // create a step variable so that there would be a `pointcount` steps in a
  // circle
  double step{(std::numbers::pi / pointcount) * 2};

  // instantiate a vector of complex numbers to append to
  complex_vector vec{};

  // loop through every direction in a circle
  // in this loop, append the next point on a circle into a vector so that
  // every point is in order
  for (double i = 0; i < 2 * std::numbers::pi; i += step) {
    // set the x variable
    double x = std::cos(i) + dx;

    // set the y variable
    double y = std::sin(i) + dy;

    // add the newly calculated complex number into the vector, adding a new
    // point to the circle
    vec.emplace_back(x, y);
  };

  // return the resulting vector
  return vec;
}

} // namespace AirfoilTools::PointMaker