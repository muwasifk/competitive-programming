#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

const int MM = 1e7 + 5;

int p[MM];

bool isprime(long double n){
    for (long double i = 2; i <= (int)floor(sqrt(n)); i ++){
        if (n/i == floor(n/i)) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    memset(p, 0, sizeof(p));
    
    for (int i = 2; i < MM; i ++){
        if (isprime(i)){
            for (int j = i; j < MM; j += i){
                p[j] ++;
            }
        }
    }
    
    int t; cin >> t;
    
    for (int l = 0; l < t; l ++){
        int a, b, k; cin >> a >> b >> k;
        int c = 0;
        for (int i = a; i <= b ; i ++){
            if (p[i] == k) c ++;
        }
        cout << "Case #" << l + 1 << ": " << c << endl;
    }
    
}