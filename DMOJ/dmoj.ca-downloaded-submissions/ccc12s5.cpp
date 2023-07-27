#include <iostream>
#include <cstring>  // WHY DOES XCODE JUST IMPORT IT FOR ME GRRR

using namespace std;

int main() {
    
    int meows[26][26];
    int dp[26][26];
    
    int r, c, k; cin >> r >> c >> k;
    
    memset(meows, 0, sizeof(meows)); memset(dp, 0, sizeof(dp)); dp[1][1] = 1;
    
    int uwu, owo;
    for (int i = 0; i < k; i++) {cin >> uwu >> owo; meows[uwu][owo] = 1;}
    
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (!meows[i][j]) dp[i][j] += dp[i-1][j] + dp[i][j-1];
        }
    }
    cout << dp[r][c] << endl;
    return 0;
}