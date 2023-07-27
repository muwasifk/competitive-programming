#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

const int MM = 260;
int n, dp[MM][MM]; string s;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    for (int t = 1; t <= 5; t ++){
        cin >> s; n = s.size();
        memset(dp, 0, sizeof((dp)));
        for (int i = 0; i < n; i ++) dp [i][i] = 1;
        for (int len = 1; len < n; len ++){
            for (int l = 0; l + len < n; l ++){
                int r = l + len;
                if (s[l] == s[r]) dp [l][r] = 2 + dp[l+1][r-1];
                else dp[l][r] = max(dp[l+1][r], dp[l][r-1]);
            }
        }
        
        cout << dp[0][n-1] << endl;
    }
    
}