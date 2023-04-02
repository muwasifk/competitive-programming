#include <iostream>
#include <string> 

using namespace std;

bool a[128][128]; int q; string s, t, b; 

bool fun(char x, char y){
    string ns = "", nt = ""; 
    for (char c : s) if (c == x || c == y) ns.push_back(c); 
    for (char c : t) if (c == x || c == y) nt.push_back(c); 
    return ns == nt; 
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> s >> t; 
    
    for (char x = 'a'; x <= 'r'; x ++) for (char y = x; y <= 'r'; y ++) a[x][y] = a[y][x] = fun(x, y); 
    
    for (cin >> q; q > 0; q --){
        cin >> b; 
        bool flag = true; 
        for (char c1 : b) for (char c2 : b) if (!a[c1][c2]) flag = false; 
        
        cout << (flag ? "Y" : "N"); 
    }
    
    
}