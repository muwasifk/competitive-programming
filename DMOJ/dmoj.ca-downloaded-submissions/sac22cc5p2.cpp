#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; string p; cin >> n >> p;
    
    if (n%2 == 1){
        cout << p;
    }else{
        if (p == "right"){
            cout << "left";
        }else{
            cout << "right";
        }
    }
}