#include <iostream>

using namespace std;

int main(){
    long long int l, r; cin >> l >> r;
    
    long long int x = l;
    long long int c = 0;
    while (x <= r){
        x = x * 2;
        c ++;
    }
    
    cout << c;
}