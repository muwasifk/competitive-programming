#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long int n; cin >> n;
    
    long long int p = 0;
    string ans = "";
    
    while (pow(2, p) <= n){
        ans += '1';
        p += 1;
    }
    
    cout << ans;
}