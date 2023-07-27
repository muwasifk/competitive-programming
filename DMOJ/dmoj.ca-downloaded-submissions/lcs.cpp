#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//bdcaba
//abcbdab

#define MAXL 3002

int dptable[MAXL][MAXL];
int dptable2[MAXL][MAXL];

void lcslen(string s1, string s2){
    int m = s1.length(); int n = s2.length();
    
    for (int i = 0; i <= m; i ++) dptable[i][0] = 0;
    
    for (int j = 0; j <= n; j ++) dptable[0][j] = 0;
    
    for (int i = 0; i <= m; i ++){
        for (int j = 0; j <= n; j ++){
            if (s1[i-1] == s2[j-1]){
                dptable[i][j] = dptable[i-1][j-1] + 1;
                dptable2[i][j] = 1;
            }else if (dptable[i-1][j] >= dptable[i][j-1]){
                dptable[i][j] = dptable[i-1][j];
                dptable2[i][j] = 2;
            }else{
                dptable[i][j] = dptable[i][j-1];
                dptable2[i][j] = 3;
            }
        }
    }
}

void printlcs(string s1, int i, int j){
    if (i == 0 || j == 0) return;
    if (dptable2[i][j] == 1){
        printlcs(s1, i-1, j-1);
        cout << s1[i-1];
    }else if (dptable2[i][j] == 2){
        printlcs(s1, i-1, j);
    }else{
        printlcs(s1, i, j-1);
    }
}

int main(){
    int n, m; cin >> n >> m;
    string s1, s2; cin >> s1 >> s2;

    
    lcslen(s1, s2);
    
    printlcs(s1, s1.length(), s2.length());
    
    return 0;
    
    
}