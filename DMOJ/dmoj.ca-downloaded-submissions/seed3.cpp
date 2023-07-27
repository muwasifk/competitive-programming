#include <iostream>

using namespace std;

long long int dsa[(int) 1e5+1];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    long long int i, n, j; cin >> i >> n >> j;
    
    for (int _ = 0, a, b, k; _ < j; _ ++){
        cin >> a >> b >> k; dsa[a] += k; dsa[b + 1] -= k;
    }
    
    long long int ret = 0;
    
    for (int _ = 1; _ <= i; _ ++){
        dsa[_] += dsa[_-1]; if (dsa[_] < n) ret ++;
    }
    
    cout << ret;
    
}