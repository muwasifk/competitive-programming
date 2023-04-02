#include <iostream>

using namespace std;

#define MAX 1001

int dp[MAX][MAX];

int gp[MAX]; int hp[MAX];

int x(int i, int j, string gwl, string hwl){
    if (gp[i] < hp[j]){
        if (gwl[i-1] == 'L' && hwl[j-1] == 'W'){
            return gp[i] + hp[j];
        }
        return 0;
    }else if (gp[i] > hp[j]){
        if (gwl[i-1] == 'W' && hwl[j-1] == 'L'){
            return gp[i] + hp[j];
        }
        return 0;
    }
    return 0;
}

int main(){
    int n; cin >> n;
    
    string gwl, hwl;
    
    cin >> gwl;
    
    for (int i = 1; i <= n; i ++) cin >> gp[i];
    
    cin >> hwl;
    
    for (int i = 1; i <= n; i ++) cin >> hp[i];
    
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n; j ++){
            dp[i][j] = max(dp[i-1][j], max(dp[i][j-1], dp[i-1][j-1] + x(i, j, gwl, hwl)));
        }
    }
    
    cout << dp[n][n];
    return 0;
}