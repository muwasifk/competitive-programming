#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    int m = -1, s = 0;
    
    for (int i = 0, x; i < n; i ++){
        cin >> x;
        if (x % 2 == 0) s += x;
        else {m = max(m, s); s = 0;}
    }
    
    cout << max(m, s);
}