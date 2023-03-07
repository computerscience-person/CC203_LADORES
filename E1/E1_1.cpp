// Exercise 1.1
// By: Oliver Ladores
//     Lemmuel Dave Dañosos
// Date: 2023-02-07
#include <iostream>

using namespace std;
const int DECLARED_SIZE = 10;

int main(){
    cout << "Enter up to ten nonegative integers. \n"
            << "Place a negative number at the end. \n";
    int numArray[DECLARED_SIZE], next, index = 0;
    // Removed cin >> next
    while((next >= 0)) // Changed to while loop and removed next < DECLARED_SIZE
    {
        cin >> next; // Moved cin >> next to here
        numArray[index] = next; // Renamed to numArray
        index++;
    }
    int numberUsed = index;
    cout << "Here they are back at you: ";  
    for (index = 0; index < numberUsed; index++) // Changed increment to index++
        cout << numArray[index] << " "; // Changed to numArray
    cout << endl;  
    return 0;
}