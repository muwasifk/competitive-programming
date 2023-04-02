#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    if (n == 1) cout << 1 << endl;
    else if (n == 2 || n == 3 || n == 4) cout << -1 << endl;
    else{
        for (int i = n; i > 0; i --){
            if (i%2 == 1 && i != 5) cout << i << " ";
        }
        cout << 5 << " " << 4 << " ";
        for (int i = n; i > 0; i --){
            if (i%2 == 0 && i != 4 && i != 2) cout << i << " ";
            else if (i == 2) cout << i << endl;
        }
    }
}