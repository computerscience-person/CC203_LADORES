#include <iostream>
#include <string>

class MyFavObj {
  unsigned int creationYear;
  std::string creator;

public:
  std::string name;
  std::string description;
  std::string owner;

  MyFavObj(std::string name, unsigned int creationYear, std::string creator,
           std::string description, std::string owner) {
    this->name = name;
    this->creationYear = creationYear;
    this->creator = creator;
    this->description = description;
    this->owner = owner;
  }

  MyFavObj() {
    this->name = "No name";
    this->creationYear = 0;
    this->creator = "No creator";
    this->description = "No description";
    this->owner = "No owner";
  }

  auto output() {
    std::cout << this->creationYear << ", " << this->name << ", "
              << this->creator << ", " << this->description << ", "
              << this->owner << std::endl;
  }

  auto setCreationYear(unsigned int creationYear) {
    this->creationYear = creationYear;
  }

  auto setCreator(std::string creator) { this->creator = creator; }

  auto getCreationYear() -> unsigned int { return this->creationYear; }

  auto getCreator() -> std::string { return this->creator; }
};

class ScoredMyFaveObj : public MyFavObj {
public:
  unsigned int score;
  ScoredMyFaveObj(unsigned int scoreInput) : MyFavObj(), score(scoreInput) {}
  void rating() {
    if (score > 7)
      std::cout << "This one's a fave!\n";
  }
};

auto main() -> int {
  auto OlliesLaptop = ScoredMyFaveObj(10);
  OlliesLaptop.setCreator("Hello");
  OlliesLaptop.rating();
  std::cout << OlliesLaptop.getCreator();
  return 0;
}
