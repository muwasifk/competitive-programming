#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int pos[(int)1e6 + 1]; vector<int> lis;

int main(){
    int n, m; cin >> n;
    
    int x;
    for (int i = 1; i <= n; i ++) {cin >> x; pos[x] = i;}
    
    cin >> m;
    for (int i = 1; i <= m; i ++){
        cin >> x; x = pos[x];
        if (x == 0) continue;
        if (lis.size() == 0 || x > lis[lis.size()-1]) lis.emplace_back(x);
        else *lower_bound(lis.begin(), lis.end(), x) = x;
    }
    
    cout << lis.size();
}