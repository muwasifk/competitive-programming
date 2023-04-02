#include <iostream>
#include <set>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
    iostream::sync_with_stdio(NULL); cout.tie(NULL); cin.tie(NULL);
    
    int n, m; cin >> n >> m; vector <int> a(n);
    
    for (int i = 0; i < n; i ++) cin >> a[i];
    
    sort(a.begin(), a.end());
    
    long long ans = 0;
    
    for (int i = 0; i < n; i ++) ans += upper_bound(a.begin(), a.begin()+i, m-a[i]) - a.begin();
    
    cout << ans << endl; 
    
}