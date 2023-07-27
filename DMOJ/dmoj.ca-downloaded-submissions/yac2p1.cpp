#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    
    for (int i = 0; i < t; i ++){
        long long int a, b, c, d; cin >> a >> b >> c >> d;
        if ((b - a) * (d - c) > (a * c)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}