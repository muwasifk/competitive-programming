#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int h, s, q; cin >> h >> s >> q; 
    
    for (int i = 0; i < q; i ++) {
         h -= s; cout << h << endl; 
    }
    
    return 0;
}