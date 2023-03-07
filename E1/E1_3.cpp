// Exercise 1.1
// By: Oliver Ladores
//     Lemmuel Dave Dañosos
// Date: 2023-02-09
#include <iostream>
#include <vector>

int count_array(double array[], int size, double target){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(array[i] == target){
            count++;
        }
    }

    return count;
}

int main(){
    std::vector<double> prompt, unique;
    std::cout << "Enter a list of numbers. Enter other characters to end prompt: ";
    for(double x; std::cin >> x;)
        prompt.push_back(x);
    const int prompt_size = prompt.size();
    double prompt_array[prompt_size];
    copy(prompt.begin(), prompt.end(), prompt_array);
    for(int i = 0; i < prompt_size; i++){
        // std::cout << "Number: " << prompt_array[i] << "\n\n";
        int j;
        for(j = 0; j < i; j++){
            if(prompt_array[i] == prompt_array[j]) break;
        }
        if(i == j) unique.push_back(prompt_array[i]);
    
    }
    const int unique_size = unique.size();
    int count_prompt[unique_size];

    for(int j = 0; j < unique_size; j++){
        for(int i = 0; i < prompt_size; i++){
            count_prompt[j] = count_array(prompt_array, prompt_size, unique[j]);
        }
    }

    std::cout << "More than 2: \n";
    for(int i = 0; i < unique_size; i++){
        if(count_prompt[i] >= 2) std::cout << unique[i] << "\n";
    }

    return 0;
}