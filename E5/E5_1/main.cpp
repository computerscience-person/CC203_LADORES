#include "lib.hpp"
#include <iostream>

using namespace std;

auto main() -> int {
  auto dhomsFavObj = MyFavObj("laptop", 1957, "Alexander Van Gogh", "A laptop that can be used for coding, gaming, and other activities. Comfy.", "Dhom");
  auto angle1 = DegreeAngle(367);
  auto angle2 = DegreeAngle(127);
  auto pair1 = Pairs(4, -4);
  auto pair2 = Pairs(3, 5);
  cout << "Angle 1 + Angle 2: " << angle1 + angle2 << endl;
  dhomsFavObj.output();
  compareFirst(pair1, pair2);
}