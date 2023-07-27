#include <iostream>
#include <cmath>

using namespace std;

int m[1000][1000];

int a[1000];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cin >> m[i][j];
        }
    }
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            a[i] |= m[i][j];
        }
    }
    
    for (int i = 0; i < n; i ++){
        cout << a[i] << " ";
    }
    
}