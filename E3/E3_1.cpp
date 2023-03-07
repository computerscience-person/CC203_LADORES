#include <iostream>
#include <string>

using namespace std;

struct MyFavObj{
    string name;
    unsigned int creationYear;
    string creator;
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
};

auto main() -> int{
    auto lemmyFavObj = MyFavObj("football", 2000, "Mikasa", "A football from Mikasa.", "Lemmy");
    auto olliFavObj = MyFavObj();
    olliFavObj.name = "laptop";
    olliFavObj.creationYear = 2018;
    olliFavObj.creator = "Acer";
    olliFavObj.description = "A relatively robust laptop capable of so many cool things.";
    olliFavObj.owner = "Ollie";

    cout << lemmyFavObj.creationYear << ", " << lemmyFavObj.name << ", " << lemmyFavObj.creator << ", " << lemmyFavObj.description << 
    ", " << lemmyFavObj.owner << endl; cout << olliFavObj.creationYear <<
    ", " << olliFavObj.name << ", " << olliFavObj.creator << ", " <<
    olliFavObj.description << ", " << olliFavObj.owner << endl;
    return 0;
}