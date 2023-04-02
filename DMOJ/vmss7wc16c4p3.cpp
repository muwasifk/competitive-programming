#include <iostream>
#include <string>

using namespace std;

#define MAX 1003

int dp[MAX][MAX];

int main(){
    int d, i, r; string a, b; cin >> d >> i >> r >> a >> b;
    
    for (int u = 0; u <= a.length(); u ++){
        for (int v = 0; v <= b.length(); v ++){
            if (u == 0 && v == 0) dp[u][v] = 0;
            else if (u == 0) dp[u][v] = v * i;
            else if (v == 0) dp[u][v] = u * d;
            else{
                if (a[u-1] == b[v-1]) dp[u][v] = dp[u-1][v-1];
                else dp[u][v] = min(dp[u-1][v-1] + r, min(dp[u-1][v] + d,dp[u][v-1] + i));
            }
        }
    }
    cout << dp[a.length()][b.length()];
}