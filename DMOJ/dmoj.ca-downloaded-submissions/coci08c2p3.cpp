#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits> 

using namespace std;

int n, ans = INT_MAX;

int sour[11], bitter[11];

void f(int iter, int sourval, int bitterval){
    if (iter == n){
        
        if (sourval != 0 && bitterval != 0){
            ans = min(abs(bitterval-sourval), ans);
        }
        
        
        return;
    }
    
    f(iter + 1, sourval, bitterval);
    f(iter + 1, sourval * sour[iter], bitterval + bitter[iter]);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n;
    
    for (int i = 0; i < n; i ++){
        cin >> sour[i] >> bitter[i];
    }
    
    f(0, 1 , 0);
    
    cout << ans;
    
    
}