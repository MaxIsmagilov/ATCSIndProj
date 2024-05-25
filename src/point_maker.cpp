#include "point_maker.hpp"

#include <cmath>
#include <numbers>

namespace AirfoilTools::PointMaker {

complex_vector make_points(double dx, double dy, int pointcount) {

  double scale = std::sqrt(std::pow(dx - 1, 2) + std::pow(dy, 2));

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
    double x = std::cos(i) * scale + dx;

    // set the y variable
    double y = std::sin(i) * scale + dy;

    // add the newly calculated complex number into the vector, adding a new
    // point to the circle
    vec.emplace_back(x, y);
  };

  // return the resulting vector
  return vec;
}

} // namespace AirfoilTools::PointMaker