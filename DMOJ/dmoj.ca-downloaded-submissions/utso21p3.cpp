#include <iostream>

using namespace std;

const int MAXN = 1e5+1;
const int MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    long long int n, max = 0, maxindx = 0, s, dp[MAXN]; s = 1;
    
    cin >> n;
    dp[0] = 1;
    for (int i = 1; i <= n; i ++){
        int a; cin >> a;
        if (a > max){
            dp[i] = s;
            maxindx = i;
            max = a;
        }
        else if (a < max){
            dp[i] = dp[maxindx];
        }
        else{
            dp[i] = (dp[maxindx] * (i - maxindx + 1)) % MOD;
            maxindx = i;
        }
        s += dp[i]; s %= MOD;
    }
    
    cout << dp[n];
}