#include <iostream>
#include <cstring>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    int a[(int)1e+5]; int b[(int)1e+5]; int y[(int)1e+5]; int c[(int)1e+5];
    
    for (int i = 0; i < n; i ++) cin >> a[i];
    for (int i = 0; i < n; i ++) cin >> b[i];
    
    memset(y, 0, 1e+5); memset(c, 0, 1e+5);
    
    for (int i = 0; i < n; i ++) c[b[i]] = i + 1;
    
    int count = 0;
    
    for (int i = 0; i < n; i ++){
        if (y[i] == 0){
            for (int j = i; j < n; j ++){
                if (y[j] == 0){
                    if (c[a[i]] > c[a[j]]) {y[j] = 1; count ++;}
                }
            }
        }
    }
    
    cout << count;
    return 0;

}