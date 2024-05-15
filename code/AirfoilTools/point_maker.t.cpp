#include "point_maker.hpp"
#include <gtest/gtest.h>

TEST(PointMaker, Make_four) {
  AirfoilTools::complex_vector vec =
      AirfoilTools::PointMaker::make_points(0.0, 0.0, 4);
  ASSERT_NEAR(vec[0].real(), 1, 0.0001);
  ASSERT_NEAR(vec[1].real(), 0, 0.0001);
  ASSERT_NEAR(vec[2].real(), -1, 0.0001);
  ASSERT_NEAR(vec[3].real(), 0, 0.0001);
  ASSERT_NEAR(vec[0].imag(), 0, 0.0001);
  ASSERT_NEAR(vec[1].imag(), 1, 0.0001);
  ASSERT_NEAR(vec[2].imag(), 0, 0.0001);
  ASSERT_NEAR(vec[3].imag(), -1, 0.0001);
}