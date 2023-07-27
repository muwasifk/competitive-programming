#include <iostream> 
#include <string> 

using namespace std; 

string key1 = "abc"; 
string key2 = "def"; 
string key3 = "ghi"; 
string key4 = "jkl"; 
string key5 = "mno"; 
string key6 = "pqrs"; 
string key7 = "tuv"; 
string key8 = "wxyz"; 

int numberOfSecconds(char letter){
    int a; 
    a = (int)letter - 96; 
    if (letter == 's' || letter == 'z'){
        return 4;
    }else if (letter == 't' || letter == 'w'){
        return 1; 
    }else if (letter == 'u' || letter == 'x'){
        return 2;
    }else if (letter == 'v' || letter == 'y'){
        return 3;
    }else if (a%3 == 0){
        return 3; 
    }else{
        return a%3; 
    }
}

bool sameKey(char letter1, char letter2){
    if (key1.find(letter1) != -1 && key1.find(letter2) != -1){
        return true; 
    }else if (key2.find(letter1) != -1 && key2.find(letter2) != -1){
        return true; 
    }else if (key3.find(letter1) != -1 && key3.find(letter2) != -1){
        return true; 
    }else if (key4.find(letter1) != -1 && key4.find(letter2) != -1){
        return true; 
    }else if (key5.find(letter1) != -1 && key5.find(letter2) != -1){
        return true; 
    }else if (key6.find(letter1) != -1 && key6.find(letter2) != -1){
        return true; 
    }else if (key7.find(letter1) != -1 && key7.find(letter2) != -1){
        return true; 
    }else if (key8.find(letter1) != -1 && key8.find(letter2) != -1){
        return true; 
    }else{
        return false; 
    }
}

int main(){
    string word;
    while (word != "halt"){
        cin >> word; 
        
        int seconds = 0;

        for (int i = 0; i < word.length(); i++){
            if (i != 0){
                if (sameKey(word[i], word[i-1]) == true){
                    seconds += 2; 
                }
            }
            
            seconds += numberOfSecconds(word[i]);
        }
        if (word != "halt"){
            cout << seconds << endl; 
        }
    }
    return 0;
}