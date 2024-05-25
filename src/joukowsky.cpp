#include "joukowsky.hpp"

#include "point_maker.hpp"
#include <algorithm>

namespace AirfoilTools::Joukowsky {

complex_vector joukowsky_transform(double dx, double dy, int pointcount) {
  // create the input
  complex_vector input = PointMaker::make_points(dx, dy, pointcount);

  // create a new vector to contain the transformed coordinates
  complex_vector v{};

  // for each input in input, perform the transform
  std::for_each(input.begin(), input.end(), [&](const complex_number &c) {
    // push back the transformed coordinates into the new vector
    v.push_back(c + (complex_number(1, 0) / c));
  });

  // return the resulting vector
  return v;
}

} // namespace AirfoilTools::Joukowsky