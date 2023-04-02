#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){

    int t; cin >> t;
    while (t --){
        int n; cin >> n; vector<int> u(n), v(n);
        
        for (int i = 0; i < n; i ++){
            cin >> u[i]; v[i] = u[i];
        }
        
        bool x = true;
        for (int i = 1; i < n; i += 2){
            if (u[i] == 0){
                u[i] = 2147483647;
            }
        }
        
        for (int i = 1; i < n; i += 2){
            if (u[i-1] >= u[i] || (i + 1 < n && u[i] <= u[i+1])){
                x = false;
            }
        }
        
        bool y = true;
        for (int i = 0; i < n; i += 2){
            if (v[i] == 0){
                v[i] = 2147483647;
            }
        }
        
        for (int i = 0; i < n; i += 2){
            if ((i-1>= 0 && v[i-1] >= v[i]) || (i + 1 < n && v[i] <= v[i+1])){
                y = false;
            }
        }
        
        if (x || y) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
}