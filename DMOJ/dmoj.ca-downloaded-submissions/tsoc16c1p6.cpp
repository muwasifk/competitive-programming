#include <iostream>
#include <string>

using namespace std;

int dp[1001][1001];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m; string a, b; cin >> a >> b;
    dp[0][0] = 0;
    for(int i = 0; i <= n; i ++){
        for(int j = 0; j <= m; j ++){
            if (i == 0) dp[i][j] = (j + 2)/ 3; else if (j == 0) dp[i][j] = (i + 2)/3; else{
                if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1]; else dp[i][j] = 1 + dp[i-1][j-1];
                for (int y = 1; y < 4; y ++){if (y <= j) dp[i][j] = min(dp[i][j], dp[i][j-y] + 1); if (y <= i) dp[i][j] = min(dp[i][j], dp[i-y][j] + 1);
                }
            }
        }
    }
    cout << dp[n][m];
}