#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, k, x; string s;

char nn[501][501]; int hashl[501];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n >> m >> k >> x; cin >> s;
    int hashash = 0;
    for (int i = 0; i < m; i ++) cin >> nn[i]; for (int i = 0; i < n; i ++) if (s[i] == '#') {hashl[hashash] = i; hashash ++;}
    
    x --;
    for (int i = 0; i < m; i ++) sort(nn[i], nn[i]+k);
    
    for (int i = 0; i < m; i ++) s[hashl[i]] = nn[i][0];
    
    for (int i = m - 1; i >= 0; i --){
        if (x == 0) break;
        s[hashl[i]] = nn[i][x%k]; x /= k;
    }
    cout << s;
}