#include "lib.hpp"
#include <iostream>
#include <string>

using namespace std;

MyFavObj::MyFavObj(string name, unsigned int creationYear, string creator,
                   string description, string owner) : name(name), creationYear(creationYear), creator(creator), description(description), owner(owner) {};

MyFavObj::MyFavObj() : name("No name"), creationYear(0), creator("No creator"), description("No description"), owner("No owner") {};

auto MyFavObj::output() -> void {
  cout << this->creationYear << ", " << this->name << ", " << this->creator
       << ", " << this->description << ", " << this->owner << endl;
}

auto MyFavObj::setCreationYear(unsigned int creationYear) -> void {
  this->creationYear = creationYear;
}

auto MyFavObj::setCreator(string creator) -> void { this->creator = creator; }

auto MyFavObj::getCreationYear() -> unsigned int { return this->creationYear; }

auto MyFavObj::getCreator() -> string { return this->creator; }

// auto main() -> int {
//   auto tiansFavObj =
//       MyFavObj("pillow", 2019, "Unknown",
//                "Mapino, mahumok, kag namit-namit gid ya.", "Tian");
//   auto ginoFavObj = MyFavObj();
//   ginoFavObj.name = "shoes";
//   ginoFavObj.description = "A pair of shoes that can be used for running, "
//                            "walking, and other activities. Comfy.";
//   ginoFavObj.owner = "Gino";

//   tiansFavObj.output();
//   ginoFavObj.output();

//   ginoFavObj.setCreationYear(2022);
//   ginoFavObj.setCreator("World Balance");

//   tiansFavObj.output();
//   ginoFavObj.output();

//   return 0;
// }
