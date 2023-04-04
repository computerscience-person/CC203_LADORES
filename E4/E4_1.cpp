#include <iostream>

using namespace std;

class Pairs {
private:
  int first, second;

public:
  Pairs(int first, int second) : first(first), second(second){};
  friend auto compareFirst(Pairs pair1, Pairs pair2) -> void {
    if (pair1.first > pair2.first) {
      cout << "First object has the bigger value of first" << endl;
    } else {
      cout << "Second object has the bigger value of first" << endl;
    }
  }
  friend auto isSumEven(Pairs pair1, Pairs pair2) -> void {
    int sum = pair1.second + pair2.second;
    if (sum % 2 == 0)
      cout << "The sum of both object's second variable are even." << endl;
    else
      cout << "The sum of both object's second variable are not even." << endl;
  }
};

auto main() -> int {
  auto pair1 = Pairs(4, -4);
  auto pair2 = Pairs(3, 5);
  compareFirst(pair1, pair2);
  isSumEven(pair2, pair1);
  return 0;
}
