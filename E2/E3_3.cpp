// Exercise 2.3 in CC203
// By: Oliver Ladores
//     Lemmuel Dave Dañosos
// Date: 2023-02-17
#include <iostream>
#include <cstring>

using namespace std;

const char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char delims[] = " .,\t";

int main(){
    char str[100], input[100];
    char *token; // LOL Pointers
    int count_letters[26] = {0};
    int count = 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    strcpy(input, str);
    token = strtok(str, delims); // Tokenize the string
    while(token != NULL){
        if(strchr(alpha, token[0]) != NULL){
            count++;
        }
        token = strtok(NULL, delims); // Get the next token
    }
    cout << "The number of words is " << count << endl;

    for(int i = 0; i < strlen(input); i++){
        for(int j = 0; j < strlen(alpha) - 26; j++){
            if(input[i] == alpha[j] || input[i] == alpha[j + 26]){
                count_letters[j]++;
            }
        }
    }

    for(int i = 0; i < strlen(alpha) - 26; i++){
        if(count_letters[i] != 0) cout << alpha[i] << ": " << count_letters[i] << endl;
    }

    return 0;
}