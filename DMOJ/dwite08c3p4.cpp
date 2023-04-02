#include <iostream>
#include <cstring>

using namespace std;

int dp[101]; int m, n, c;

int main(){
    for (int t = 0; t < 5; t ++){
        cin >> m >> n; memset(dp, 0x3f, sizeof(dp)); dp[0] = 0;
        
        for (int i = 0; i < n; i ++){cin >> c; for(int j = c; j <= m; j++) dp[j] = min(dp[j], dp[j - c] + 1);}
        
        cout << dp[m] << endl;
    }
}