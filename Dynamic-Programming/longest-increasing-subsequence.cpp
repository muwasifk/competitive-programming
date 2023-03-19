#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    
    vector<int> m, dp;
    
    int x;
    for (int i = 0; i < n; i ++){cin >> x; m.emplace_back(x);}
    
    int cur;
    for (int u : m){
        cur = lower_bound(dp.begin(), dp.end(), u) - dp.begin();
        if (cur == dp.size()) dp.emplace_back(u);
        else dp[cur] = u;
    }
    
    cout << dp.size();
}
