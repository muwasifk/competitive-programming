#include <iostream> 
#include <string> 

using namespace std; 

int main(){
    int n; cin >> n; 
    
    string cur; 
    int c = 0; 
    while (n --){
        cin >> cur; 
        if (cur.length() <= 10) c ++; 
    }
    
    cout << c; 
    
}