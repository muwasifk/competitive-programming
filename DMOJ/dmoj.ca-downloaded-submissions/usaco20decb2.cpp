#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n; cin >> n; int p[n]; for (int i = 0; i < n; i ++) cin >> p[i];
    
    int ph = 0;
    for (int i = 0; i < n; i ++){
        for (int j = i; j < n; j ++){
            int t = 0;
            for (int k = i; k <= j; k++){
                t += p[k];
            }
            
            bool x = false;
            for (int k = i; k <= j; k ++){
                if (p[k] * (j-i + 1) == t){
                    x = true;
                }
            }
            
            if (x == true){
                ph ++;
            }
            
        }
    }
    
    cout << ph;
}