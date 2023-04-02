#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

const int MM = 31;
int n, a, b, c, d, dp[MM][MM][MM][MM];
int mov[5][4] = {{2,1,0,2}, {1,1,1,1}, {0,0,2,1}, {0,3,0,0}, {1,0,0,1}};
int fun(int a, int b, int c, int d){
    if (dp[a][b][c][d] != -1) return dp[a][b][c][d];
    for (int k = 0; k < 5; k ++){
        if (a >= mov[k][0] && b >= mov[k][1] && c >= mov[k][2] && d >= mov[k][3]){
            if (!fun(a-mov[k][0], b-mov[k][1], c-mov[k][2], d-mov[k][3])){
                return dp[a][b][c][d] = 1;
            }
        }
    }
    return dp[a][b][c][d] = 0;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    memset(dp, -1, sizeof(dp));
    for (cin >> n; n --;){
        cin >> a >> b >> c >> d;
        cout << (fun (a,b,c,d) ? "Patrick" : "Roland") << endl;
    }
    
}