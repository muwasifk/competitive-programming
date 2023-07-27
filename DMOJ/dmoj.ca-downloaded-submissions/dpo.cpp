#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, dp[1<<21], a[21][21], mod = 1e9 + 7;

int func(int i, int mask){
    if (i == n) return 1;
    
    if (dp[mask] != -1) return dp[mask];
    
    int ret = 0;
    for (int j = 0; j < n; j ++){
        if (a[i][j] && (mask >> j & 1) == 0)
            ret = (ret + func(i + 1, mask|1<<j)) % mod;
    }
    
    return dp[mask] = ret;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n; memset(dp, -1, sizeof(dp));
    
    for (int i = 0 ; i < n ; i ++) for (int j = 0; j < n; j ++) cin >> a[i][j];
    
    cout << func(0,0);
}