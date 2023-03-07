// Exercise 1.1
// By: Oliver Ladores
//     Lemmuel Dave Dañosos
// Date: 2023-02-07
#include <iostream>

int main()
{
    int input[10];
    
    std::cout << "Enter 10 integers:\n";
    
    // Input 10 intevers to an array
    for(int i = 0; i < 10; i++){
        std::cin >> input[i];
    }
    
    for(int i: input){
        std::cout << i << "\n";
    }

    int prompt, input_count;

    std::cout << "Enter an integer: ";
    std::cin >> prompt;

    for(int i: input){
        if(i == prompt){
            input_count++;
        }
    }

    std::cout << "The number of " << prompt << " is " << input_count << "\n";

    return 0;
}