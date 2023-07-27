#include <iostream> 
#include <string> 

using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz"; 
string vowels = "aeiou";

char closestVowels(char letter){ 
    int smallest = 1000000; 
    char closestVowel; 
    int current = 0; 
    for (int i = 0; i < 5; i ++){
        current = abs((int)letter - (int)vowels[i]);
        if (current < smallest){
            smallest = current; 
            closestVowel = vowels[i];
        }
    }
    return closestVowel;    
}

char nextConsonant(char letter){
    if (letter == 'z'){
        return 'z'; 
    }else if (alphabet[(int)letter - 97 + 1] == 'a' || alphabet[(int)letter - 97 + 1] == 'e' || alphabet[(int)letter - 97 + 1] == 'i' || alphabet[(int)letter - 97 + 1] == 'o' || alphabet[(int)letter - 97 + 1] == 'u'){
        return alphabet[(int)letter - 97 + 2];
    }else {
        return alphabet[(int)letter - 97 + 1];
    }
}

int main(){
    string initial, final; 
    cin >> initial; 
    for (int i = 0; i < initial.length(); i ++){
        if (initial[i] != 'a' && initial[i] != 'e' && initial[i] != 'i' && initial[i] != 'o' && initial[i] != 'u'){
            final += initial[i]; 
            final += closestVowels(initial[i]); 
            final += nextConsonant(initial[i]);
        }else{ 
            final += initial[i];
        }
    }

    cout << final; 
    return 0; 
}