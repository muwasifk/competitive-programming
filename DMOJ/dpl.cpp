#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

long long int arr[3000];

long long int dp[3000][3000];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    for (int i = 1; i < n + 1; i ++) cin >> arr[i];
    
    memset(dp, 0, sizeof(dp));
    
    for (int i = n; i > 0; i --){
        for (int j = i; j < n + 1; j ++){
            if (i == j) dp[i][j] = arr[i];
            else dp[i][j] = max(arr[i] - dp[i+1][j], arr[j] - dp[i][j-1]);
        }
    }
    
    cout << dp[1][n];
}