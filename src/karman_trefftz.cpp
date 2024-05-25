#include "karman_trefftz.hpp"

#include "point_maker.hpp"
#include <algorithm>

#include <iostream>

namespace AirfoilTools::Karman_Trefftz {

complex_vector karman_trefftz_transform(double dx, double dy, double pointcount,
                                        double n) {

  // make complex number b that is just 1
  // sometimes b is defined as a number other than 1, but in most cases it is 1
  // to maintain a closed (where the ends are not open) airfoil in most
  // conditions
  complex_number b{1, 0};

  // initialize points for the airfoil
  complex_vector input = PointMaker::make_points(dx, dy, pointcount);

  // create a new vector to contain the transformed coordinates
  complex_vector v{};

  // for each input in input, perform the transform
  std::for_each(input.begin(), input.end(), [&](const complex_number &z) {
    // push back the transformed coordinates into the new vector
    complex_number top = pow(z + b, n) + pow(z - b, n);
    complex_number bottom = pow(z + b, n) - pow(z - b, n);
    v.push_back(b * n * top / bottom);
  });

  // return the resulting vector
  return v;
}

} // namespace AirfoilTools::Karman_Trefftz