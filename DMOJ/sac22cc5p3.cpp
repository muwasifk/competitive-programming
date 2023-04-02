#include <iostream>
#include <algorithm>

using namespace std;

int mod = 1e9 + 7;

long long int func(long long int n){
    if (n == 0) return 1;
    if (n == 1) return 0;
    
    return (n-1) * (func(n-1) + func(n-2));
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    
    long long int x;
    for (int i = 0; i < t; i ++){
        cin >> x; cout << func(x) % mod<< endl;
    }
}