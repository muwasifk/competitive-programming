#include <iostream>

#define int long long 

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, k; cin >> n >> k;
    
    for (int i = 1; i < n; i ++) cout << i << " ";
    
    int c = (n-1) * n / 2;
    int x = n;
    while (true){
        if ((c + x)% k == 0){
            cout << x << "\n"; return 0;
        }
        x ++;
    }

}