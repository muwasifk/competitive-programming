#include <iostream>
#include <climits> 

using namespace std;

int values[10000];
long int dp[10000];

int main(){
    int x, m; cin >> x >> m;
    
    for (int i = 0; i < m; i ++) cin >> values[i];
    
    for (int i = 1; i <= x; i ++) dp[i] = INT_MAX; dp[0] = 0;
    
    for (int i = 1; i <= x; i ++) for (int j = 0; j < m; j++)  dp[i] = min(dp[i], dp[i - values[j]] + 1);
    
    cout << dp[x];
}