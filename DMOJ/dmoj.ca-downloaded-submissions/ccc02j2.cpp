#include <iostream> 
#include <string> 

using namespace std; 

int main(){
    string word = "abcde"; 
    while (word != "quit!"){
        cin >> word; 
        string x;
        x = word.substr(word.length()-3, 3);

        if (word == "quit!"){
            return 0; 
        }

        if (word.length() > 3 && x != "aor" && x != "ior" && x != "oor" && x != "uor" && x != "eor" && word.substr(word.length() - 2, 2) == "or"){
            cout << word.substr(0, word.length() - 2) << "our" << endl; 
        }else{
            cout << word << endl; 
        }
    }
    
}