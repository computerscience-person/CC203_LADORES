// Exercise 2.1 in CC203
// By: Oliver Ladores
//     Lemmuel Dave Dañosos
// Date: 2023-02-16

#include <iostream>
#include <cstring>

using namespace std;

struct Person{
    char name[21];
    char age[3];
    char title[21];
};


int main(){
    char name_age_title[50];
    Person person;
    cout << "Enter name, age and title: ";
    cin.getline(name_age_title, 50);

    int i = 0;
    while(name_age_title[i] != ' '){
        person.name[i] = name_age_title[i];
        i++;
    }
    person.name[i] = '\0';
    i++;

    int j = 0;
    while(name_age_title[i] != ' '){
        person.age[j] = name_age_title[i];
        i++;
        j++;
    }
    person.age[j] = '\0';
    i++;

    j = 0;
    while(name_age_title[i] != '\0'){
        person.title[j] = name_age_title[i];
        i++;
        j++;
    }
    person.title[j] = '\0';
    
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Title: " << person.title << endl;

    return 0;
}