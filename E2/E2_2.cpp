// Exercise 2.2 in CC203
// By: Oliver Ladores
//     Lemmuel Dave Dañosos
// Date: 2023-02-16

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char name[40];
    char repeat;
    cin.ignore();
    do{
        cout << "Enter your name: ";
        cin.ignore();
        cin.getline(name, 40);
        cout << "You entered: " << name << endl;
        cout << "Do you want to enter another name? (y: repeat; otherwise exit): ";
        cin >> repeat;
    }while (repeat == 'y');
    return 0;
}