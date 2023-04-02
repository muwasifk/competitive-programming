#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool iscol[1000], isrow[1000];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int r, c; cin >> r >> c;
    
    for (int i = 0; i < r; i ++){
        for (int x, j = 0; j < c; j ++){
            cin >> x;
            
            if (x == 'X'){
                iscol[j] = 1; isrow[i] = 1;
            }
        }
    }
    
    int q; cin >> q;
    
    for (int i = 0; i < q; i ++){
        int x,y; cin >> x >> y;
        if (isrow[x-1] || iscol[y-1]){
            cout << 'Y';
        }else{
            cout << 'N';
        }
    }
    
}