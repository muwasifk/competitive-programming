#include <iostream> 
#include <string> 

using namespace std; 

int main(){
    string father, mother; 
    cin >> father; 
    cin >> mother; 

    int n; 
    cin >> n;
     
    string possibility; 

    for (int i = 0; i < n; i ++){
        cin >> possibility; 
        int counter = 0;
        for (int j = 0; j < 5; j++){
            char current; 
            current = possibility[j]; 
            if ((int)current >= 65 && (int)current <= 90){
                if (father.find(current) != -1 || mother.find(current) != -1){
                    counter ++; 
                }
            }else{
                if (father.find(current) != -1 && mother.find(current) != -1){
                    counter ++; 
                }
            }
        }
        if (counter == 5){
            cout << "Possible baby." << endl;
        }else{
            cout << "Not their baby!" << endl; 
        }
    }
    return 0;
}