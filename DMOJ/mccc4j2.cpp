#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, a, b;
    cin >> n >> a >> b;
    
    int x, y;
    
    int c1 = 0;
    int c2 = 0;
    
    for (int i = 0; i < n; i ++){
        cin >> x >> y;
        
        if (x < a){
            c1 ++;
        }else{
            c1 += 2;
        }
        
        if (y < b){
            c2 ++;
        }else{
            c2 += 2;
        }
    }
    
    if (c1 == c2){
        cout << "Tie!\n";
    }else if (c1 < c2){
        cout << "Andrew wins!\n";
    }else{
        cout << "Tommy wins!\n";
    }
    return 0;
}