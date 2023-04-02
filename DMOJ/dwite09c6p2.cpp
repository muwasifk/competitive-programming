#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    for (int _ = 0; _ < 5; _ ++){
        int n; cin >> n;
        
        long long int l, h; l = pow(2, floor(log2(n))); h = pow(2, ceil(log2(n)));
        if (n == 0) {cout << 1 << endl; continue;}
        if (h + l > 2 * n) cout << l << endl;
        else cout << h << endl;
    }
}