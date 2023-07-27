#include <iostream> 
#include <string> 

using namespace std; 

string removeNonAlpha(string str){
    string ret; 
    for (int i = 0; i < str.length(); i++){
        if (((int)str[i] >= 65 && (int)str[i] <= 90) || ((int)str[i] >= 97 && (int)str[i] <= 122)){
            ret += str[i]; 
        }
    }
    return ret; 
}

int index(char letter){
    return (int)(letter - 65); 
}

int main(){
    string key; 
    string message; 
    cin >> key; 
    getline(cin >> ws, message); 

    message = removeNonAlpha(message); 

    int shiftNum = 0; 
    string encoded; 
    char updadtedLetter; 
    for (int j = 0; j < message.length(); j++){
        shiftNum = index(key[j%(key.length())]);
        updadtedLetter = char((index(message[j]) + shiftNum)%26 + 65); 
        encoded += updadtedLetter; 
    }
    cout << encoded;
    return 0;  
}