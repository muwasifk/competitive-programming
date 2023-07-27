#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    iostream::sync_with_stdio(NULL); cout.tie(NULL); cin.tie(NULL);
    
    int n; cin >> n; vector <double> v(n);
    
    for (int i = 0; i < n; i ++) cin >> v[i];
    
    sort(v.begin(), v.end());
    
    vector<double> dist;
    
    for (int i = 1; i < n-1; i ++){
        dist.emplace_back( (v[i+1] - v[i]) / 2 + (v[i] - v[i-1]) / 2 );
    }
    
    sort(dist.begin(), dist.end());
    
    cout << fixed << setprecision(1) << dist[0];
}