#include <iostream>

using std::cout, std::cin;

auto choco_bars(unsigned int dollars) -> unsigned int {
  if (dollars < 7)
    return dollars;
  else {
    unsigned int amt_choco_bars = 0;
    dollars -= 6;
    amt_choco_bars += choco_bars(dollars) + 7;
    return amt_choco_bars;
  }
}

auto main() -> int {
  unsigned int dollarsInput;
  cout << "Enter amount of dollars: ";
  cin >> dollarsInput;
  cout << "Chocolate Bars: " << choco_bars(dollarsInput);
  return 0;
}
