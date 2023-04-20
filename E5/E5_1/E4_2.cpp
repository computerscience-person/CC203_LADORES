#include "lib.hpp"
#include <iostream>

using namespace std;

DegreeAngle::DegreeAngle() : angle(0){};
DegreeAngle::DegreeAngle(unsigned int angle) {
  if (angle >= 360)
    angle = angle % 360;
  this->angle = angle;
}

auto operator+(DegreeAngle angle1, DegreeAngle angle2) -> const int {
  return angle1.angle + angle2.angle;
}

auto operator-(DegreeAngle angle1, DegreeAngle angle2) -> const int {
  return angle1.angle - angle2.angle;
}


// auto main() -> int {
//   auto angle1 = DegreeAngle(255);
//   auto angle2 = DegreeAngle(127);
//   cout << "Angle 1 + Angle 2: " << angle1 + angle2 << endl;
//   cout << "Angle 1 - Angle 2: " << angle1 - angle2 << endl;
//   return 0;
// }
