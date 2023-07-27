#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int a[3], b[3], c[3]; 
    
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2] >> c[0] >> c[1] >> c[2]; 
    int t = 0; 
    for (int i = 0; i <= 2; i ++){
        if (b[i] = a[i-1]) t += c[i]; 
    }
    
    cout << t; 
}