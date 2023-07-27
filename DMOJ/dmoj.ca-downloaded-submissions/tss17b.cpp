#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<long long int> arr;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, q; cin >> n >> q;
    
    long long int x, y;
    for (int i = 0; i < n; i ++){
        cin >> x >> y;
        
        arr.emplace_back(ceil(sqrt(x * x + y * y)));
    }
    
    sort(arr.begin(), arr.end());
    
    long long int r; 
    for (int i = 0; i < q; i ++){
        cin >> r;
        
        cout << upper_bound(arr.begin(), arr.end(), r) - arr.begin() << endl;
    }
}