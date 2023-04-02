#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    iostream::sync_with_stdio(NULL); cout.tie(NULL); cin.tie(NULL);
    
    int n, q; cin >> n >> q; vector<int> s(n);
    
    for (int i = 0; i <n; i ++) cin >> s[i];
    
    sort(s.begin(), s.end());
    
    for (int i = 0; i < q; i ++){
        int l, r; cin >> l >> r;
        int j = upper_bound(s.begin(), s.end(), r) - s.begin();
        int k = lower_bound(s.begin(), s.end(), l) - s.begin();
        cout << j - k << endl;
    }
    
}