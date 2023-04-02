#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

#define MAXL 5001

int dptable[2][MAXL];

void lcslen(string s1, string s2){
    int m = s1.length(); int n = s2.length();
    
    for (int i = 0; i <= 1; i ++) dptable[i][0] = 0;
    
    for (int j = 0; j <= 1; j ++) dptable[0][j] = 0;
    
    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++){
            if (s1[i-1] == s2[j-1]) dptable[1][j] = dptable[0][j-1] + 1;
            else dptable[1][j] = max(dptable[0][j], dptable[1][j-1]);
        }
        copy(begin(dptable[1]), end(dptable[1]), begin(dptable[0]));
    }
    
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; string s1, s2; cin >> n >> s1; s2 = s1; reverse(s1.begin(), s1.end());
    lcslen(s1, s2);
    cout << n - dptable[1][s2.length()];
    
}