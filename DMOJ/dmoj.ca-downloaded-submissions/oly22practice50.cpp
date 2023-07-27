#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m;
    
    vector<int> freq;
    for (int i = 0; i < n; i ++){
        freq.emplace_back(0);
    }
    
    for (int i = 0, l, r; i < m; i ++){
        cin >> l >> r;
        for (int j = l; j <= r; j ++){
            freq[j] ++;
        }
    }
    
    int count = 0;
    for (auto i : freq){
        if (i == m){
            count ++;
        }
    }
    
    cout << count;
    
}