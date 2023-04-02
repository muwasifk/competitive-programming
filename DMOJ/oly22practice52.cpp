#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    string sentence; getline(cin, sentence); 
    
    int c = 0;
    for (char i : sentence){
        if (i == 'Z' || i == 'z'){
            c ++;
        }
    }
    
    if (c >= 3) cout << "YES";
    else cout << "NO";
}