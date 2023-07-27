#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int scores[76] = {0};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int m, n; cin >> m >> n;
    
    for (int i = 0, x; i < m; i ++){
        cin >> x;
        scores[x] ++;
    }
    
    int c = 0;
    for (int i = 76; i >= 0; i --){
        if (c + scores[i] > n){
            cout << c; return 0;
        }else{
            c += scores[i];
        }
    }
    
}