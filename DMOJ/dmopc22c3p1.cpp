#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long int n, m; cin >> n >> m;
    
    if (n == 1){
        if (m%2 == 0){
            cout << m/2 << " " << m/2;
        }else{
            cout << (m+1)/2 << " " << (m-1)/2;
        }
    }else if (m*n % 2 == 0){
        cout << (m*n)/2 << " " << (m*n)/2;
    }else{
        cout << (m*n + min(m,n)) / 2 << " " << (m*n - min(n,m))/2;
    }
}