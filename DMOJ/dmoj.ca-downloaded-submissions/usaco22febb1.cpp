#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n; cin >> n;
    
    vector<int> original(n);
    
    int s = 0; int x;
    for (int i = 0; i < n; i ++){
        cin >> x; original[i] = x; s += x;
    }
    
    for (int i = n; i > 0; i --){
        if (!(s % i)){
            int target = s / i; int cur = 0; bool flag = 0;
            for (int j = 0; j < n; j ++){
                cur += original[j];
                if (cur > target) {flag ^= 1; break;}
                if (cur == target) cur = 0;
            }
            if (!flag) {cout << n - i << "\n"; return;}
        }
    }
}

int main(){int t; cin >> t; for (int i = 0; i < t; i ++){solve();}}