#include <iostream> 
#include <string> 

using namespace std; 

int main(){
    string word; 
    cin >> word; 
    int counter = 0;
    for (int i = 0; i < word.length(); i++){
        if (word[i] == 'I' || word[i] == 'O' || word[i] == 'S' || word[i] == 'H' || word[i] == 'Z' || word[i] == 'X' || word[i] == 'N'){
            counter ++; 
        } 
    }
    if (counter == word.length()){
        cout << "YES"; 
    }else { 
        cout << "NO";
    }
    return 0;
}