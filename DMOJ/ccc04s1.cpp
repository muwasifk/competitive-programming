#include <iostream> 
#include <string> 

using namespace std; 

bool prefix(string one, string two){
    int counter = 0; 
    for (int i = 1; i <= two.length(); i++){
        if (two.substr(0, i) != one){
            counter ++; 
        }
    }
    if (counter == two.length()){
        return true; 
    }else{
        return false;
    }
}

bool suffix(string one, string two){
    int counter = 0; 
    for (int i = 1; i <= two.length(); i ++){
        if (two.substr(i, two.length() - i + 1) != one){
            counter ++; 
        }
    }
    if (counter == two.length()){
        return true;
    }else{
        return false; 
    }
}

int main(){
    int sets;
    cin >> sets; 

    for (int i = 0; i < sets; i++){
        string word1, word2, word3; 
        cin >> word1;
        cin >> word2; 
        cin >> word3; 
  
        if (prefix(word1, word2) && prefix(word1, word3) && prefix(word2, word1) && prefix(word2, word3) && prefix(word3, word1) && prefix(word3, word2)){
            if (suffix(word1, word2) && suffix(word1, word3) && suffix(word2, word1) && suffix(word2, word3) && suffix(word3, word1) && suffix(word3, word2)){
                cout << "Yes" << endl; 
            }else{
                cout << "No" << endl; 
            }
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}