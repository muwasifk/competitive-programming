#include <iostream> 
#include <string> 

using namespace std; 

int main(){
    string plain, key, cipher; 
    getline(cin, plain); 
    getline(cin, key);
    getline(cin, cipher); 

    for (int i = 0; i < cipher.length(); i ++){
        char current;
        current = cipher[i];

        int index; 
        if (key.find(current) == -1){
            cout << "."; 
        }else{
            cout << plain[key.find(current)];
        }
    } 
    return 0;
}