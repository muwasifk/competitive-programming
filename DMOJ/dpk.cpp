#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int a[101], dp[100001], n;

bool r(int x){
    if (x == 0) return dp[x] = 0;
    if (dp[x] != -1) return dp[x];
    
    for (int i = 1; i <= n; i ++) if (x >= a[i] && !r(x-a[i])) return dp[x] = 1;
    
    return dp[x] = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int k; cin >> n >> k; memset(dp, -1, sizeof(dp));
    
    for (int i = 1; i <= n; i ++) cin >> a[i];

    cout << (r(k) ? "First" : "Second");
}