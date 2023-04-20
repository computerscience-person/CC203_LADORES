#include "lib.hpp"
#include <string>

namespace DecimalBookInfo {
DecimalBookInfo::DecimalBookInfo(const std::string bookNameInput,
                                 const unsigned int subjectAreaCodeInput,
                                 const unsigned int subcategoryInput)
    : bookName(bookNameInput), subjectAreaCode(subjectAreaCodeInput),
      subcategory(subcategoryInput) {}
auto DecimalBookInfo::get() -> std::string {
  return std::string(bookName + " " + std::to_string(subjectAreaCode) + "." +
                     std::to_string(subcategory));
}
} // namespace DecimalBookInfo
