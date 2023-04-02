#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    long long int c, d, e; cin >> c >> d >> e;
    
    if (d & e) {cout << 0; return 0;}
    
    long long int cx = 1;
    
    for (int i = 0; i < 30; i ++){if ((d >> i & 1) || (!(e >> i & 1))) continue; if (c >> i & 1) cx *= 2;}
    
    cout << cx;
}