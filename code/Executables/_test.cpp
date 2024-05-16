#include "../AirfoilTools/joukowsky.hpp"
#include "../AirfoilTools/karman_trefftz.hpp"
#include "../AirfoilTools/point_maker.hpp"

#include <iostream>
#include <numbers>

using namespace AirfoilTools;

int main(int argc, char const *argv[]) {
  double dx = -0.1, dy = 0.1;
  // auto r = Karman_Trefftz::karman_trefftz_transform(dx, dy, 1000, 1.95);
  auto r = Joukowsky::joukowsky_transform(dx, dy, 1000);
  for (auto &&i : r) {
    std::cout << i.real() << ';' << i.imag() << '\n';
  }
  return 0;
}
