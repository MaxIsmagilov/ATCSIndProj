#include "../src/joukowsky.hpp"
#include "../src/karman_trefftz.hpp"
#include "../src/point_maker.hpp"

#include <iostream>
#include <numbers>

using namespace AirfoilTools;

int main(int argc, char const *argv[]) {
  double dx = -0.08, dy = 0.05;
  auto r = Karman_Trefftz::karman_trefftz_transform(dx, dy, 10000, 2);
  // auto r = Joukowsky::joukowsky_transform(dx, dy, 10000);
  for (auto &&i : r) {
    std::cout << i.real() << ';' << i.imag() << '\n';
  }
  return 0;
}
