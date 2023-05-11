#include <iostream>

using std::cout;

auto handshake(unsigned int n) -> unsigned int {
  if (n > 2)
    return (handshake(n - 1) + n - 1);
  else if (n == 2)
    return 1;
  else if (n == 1)
    return 0;
  else
    throw;
}

auto main() -> int {
  cout << handshake(10);
  return 0;
}
