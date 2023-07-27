#include <bits/stdc++.h>

using namespace std;

int main() {
    
    double m; cin >> m; 
    
    double p1, p2; 
    
    p1 = (5 + sqrt(48*m-23))/24.0;
    p2 = (5 - sqrt(48*m-23))/24.0;
    
    if (p1 >= 0){ cout << fixed << setprecision(6) << p1; }
    else{ cout << fixed << setprecision(6) <<  p2;}
    return 0;
}