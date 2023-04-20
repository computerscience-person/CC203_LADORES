#include "lib.hpp"
#include <iostream>

auto main() -> int {
  auto book1 = DecimalBookInfo::DecimalBookInfo("Book 1", 123, 1);
  std::cout << book1.get();
}
