#include <iostream> 
#include <cmath>

using namespace std; 

bool isprime(long double n){
    for (long double i = 2; i <= (int)floor(sqrt(n)); i ++){
        if (n/i == floor(n/i)) return 0; 
    }
    return 1; 
}

int main(){
    long double n; cin >>n; 

    if (isprime(n) && n >= 2){
            cout << fixed << (int) n;
            return 0; 
    }

    // Bertrand's Postulate LOL 
    for (long double i = n + 1; i < 2*n + 1; i ++){
        if (isprime(i)){
            cout << fixed << (int) i;
            return 0; 
        }
    }
}