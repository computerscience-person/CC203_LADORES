#include <iostream>
#include <string>

using namespace std;

class MyFavObj{
    unsigned int creationYear;
    string creator;
    
    public:
        string name;
        string description;
        string owner;

        MyFavObj(
            string name,
            unsigned int creationYear,
            string creator,
            string description,
            string owner
            ){
            this -> name = name;
            this -> creationYear = creationYear;
            this -> creator = creator;
            this -> description = description;
            this -> owner = owner;
        }

        MyFavObj(){
            this -> name = "No name";
            this -> creationYear = 0;
            this -> creator = "No creator";
            this -> description = "No description";
            this -> owner = "No owner";
        }

        auto output(){
            cout <<
            this -> creationYear <<
            ", " << this -> name <<
            ", " << this -> creator <<
            ", " << this -> description <<
            ", " << this -> owner << endl;
        }

        auto setCreationYear(unsigned int creationYear){
            this -> creationYear = creationYear;
        }

        auto setCreator(string creator){
            this -> creator = creator;
        }

        auto getCreationYear() -> unsigned int{
            return this -> creationYear;
        }
        
        auto getCreator() -> string{
            return this -> creator;
        }
};

auto main() -> int{
    auto tiansFavObj = MyFavObj("pillow", 2019, "Unknown", "Mapino, mahumok, kag namit-namit gid ya.", "Tian");
    auto ginoFavObj = MyFavObj();
    ginoFavObj.name = "shoes";
    ginoFavObj.description = "A pair of shoes that can be used for running, walking, and other activities. Comfy.";
    ginoFavObj.owner = "Gino";

    tiansFavObj.output();
    ginoFavObj.output();
    
    ginoFavObj.setCreationYear(2022);
    ginoFavObj.setCreator("World Balance");

    tiansFavObj.output();
    ginoFavObj.output();

    return 0;
}