#include <iostream>

using namespace std;

class DegreeAngle {
private:
  unsigned int angle;

public:
  DegreeAngle(unsigned int angle) {
    if (angle >= 360)
      throw;
  }
};
