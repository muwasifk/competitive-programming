#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

bool isprime(long double n){
    for (long double i = 2; i <= (int)floor(sqrt(n)); i ++){
        if (n/i == floor(n/i)) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m;
    
    vector<float> v(n + 1, 0);
    float r = 100;
    int a; float p;
    for (int i = 0; i < m; i ++){
        cin >> a >> p;
        v[a] += p/100 * r;
        r -= p/100 * r;
    }
    
    for (int i = 1; i < n + 1; i ++){
        cout << fixed << setprecision(6) << v[i]/100 << endl;
    }
    
}