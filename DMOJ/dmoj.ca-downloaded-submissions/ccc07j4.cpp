#include <iostream> 
#include <string>

using namespace std; 

int main(){
    string sentence1; 
    getline(cin, sentence1); 

    string sentence2; 
    getline(cin, sentence2); 

    int index; //index of the character in second sentence

    for (int i = 0; i < sentence1.length(); i++){
        index = sentence2.find(sentence1[i]);
        if (index != -1){
            sentence2.erase(index, 1);
        }else{
            cout << "Is not an anagram.";
            return 0;
        }
                 
    }

    for (int i = 0; i < sentence2.length(); i ++){
        if (sentence2[i] != ' '){
            cout << "Is not an anagram."; 
            return 0; 
        }
    }

    cout << "Is an anagram.";
    return 0;
}