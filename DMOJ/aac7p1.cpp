#include <iostream>
#include <cstring>

using namespace std;

int t,w,h;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin >> t;
    
    for (int i = 1; i <= t; i ++){
        cin >> w >> h;
        
        if (w == 1) cout << "bad" << endl;
        
        else if (h == 1){
            if (w >= 7) cout << "good" << endl;
            else cout << "bad" << endl;
        }else{
            if ( h >= 4 || w >= 4) cout << "good" << endl;
            else cout << "bad" << endl;
        }
        
    }
}