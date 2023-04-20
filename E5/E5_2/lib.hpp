#include <string>

namespace DecimalBookInfo {
class DecimalBookInfo {
private:
  const std::string bookName;
  const unsigned int subjectAreaCode, subcategory;

public:
  DecimalBookInfo(const std::string bookNameInput,
                  const unsigned int subjectAreaCodeInput,
                  const unsigned int subcategoryInput);
  auto get() -> std::string;
};
} // namespace DecimalBookInfo
