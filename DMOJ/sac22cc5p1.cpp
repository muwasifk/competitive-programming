#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, c; cin >> n >> c;
    
    for (int i = 0, h; i < n; i ++){
        cin >> h;
        cout << h + 2 * c << " ";
    }
}