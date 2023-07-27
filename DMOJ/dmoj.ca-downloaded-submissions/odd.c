#include <iostream>
#include <map>

using namespace std;

map<int, bool> freq;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    
    for (int i = 0, x; i < n; i ++){
        cin >> x;
        freq[x] ^= true;
    }
    
    for (auto const& k : freq){
        if (k.second == 1){
            cout << k.first;
            return 0;
        }
    }
}