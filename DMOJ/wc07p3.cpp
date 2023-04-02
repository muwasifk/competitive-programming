#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int t, n, adj[15][15], dp[15][1<<15], mod = 13371337;

int func(int u, int mask){
    if (u == n - 1) return 1;
    
    if (dp[u][mask] != -1) return dp[u][mask];
    
    int ret = 0;
    
    for (int v = 0; v < n; v ++){
        if (adj[u][v] && (mask >> v & 1) == 0){
            ret = (ret + func(v, mask|1<<v))%mod;
            
        }
    }
    
    return dp[u][mask] = ret;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    for(cin >> t; t --;){
        cin >> n; memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; i ++) for (int j = 0; j < n; j ++) cin >> adj[i][j];
        
        cout << func(0, 1) << endl;
    }
}