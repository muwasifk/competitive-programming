#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    for (int i = 0; i< n; i ++){
        string s; cin >> s;
        int count = 0;
        for (char c : s) {if (c == '(') count ++; else if (c == ')') count --; if (count < 0) {count = 1; break;}}
        cout << (count == 0 ? "YES" : "NO") << endl;
    }
}