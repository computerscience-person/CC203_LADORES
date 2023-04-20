#include <string>

using std::string;

class DegreeAngle {
private:
  int angle;

public:
  DegreeAngle();
  DegreeAngle(unsigned int angle);
  friend auto operator+(DegreeAngle angle1, DegreeAngle angle2) -> const int;
  friend auto operator-(DegreeAngle angle1, DegreeAngle angle2) -> const int;
};

class Pairs {
private:
  int first, second;

public:
  Pairs(int first, int second);
  friend auto compareFirst(Pairs pair1, Pairs pair2) -> void;
  friend auto isSumEven(Pairs pair1, Pairs pair2) -> void;
};

class MyFavObj {
private:
  unsigned int creationYear;
  string creator;

public:
  string name;
  string description;
  string owner;
  MyFavObj(string name, unsigned int creationYear, string creator,
           string description, string owner);
  MyFavObj();
  auto output() -> void;
  auto setCreationYear(unsigned int creationYear) -> void;
  auto setCreator(string creator) -> void;
  auto getCreationYear() -> unsigned int;
  auto getCreator() -> string;
};