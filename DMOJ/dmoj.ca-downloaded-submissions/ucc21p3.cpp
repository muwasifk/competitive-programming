#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        
    long long int n, x, y, r; cin >> n >> x >> y >> r;
    
    long long int res = 0;
    for (int i = 0, a, b; i < r; i ++){
        cin >> a >> b;
        if ((a < x && b < x) || (a > y && b > y)) continue;
        else if (a < x && b > y) res += (y - x + 1);
        else if (a < x && b <= y) res += (b - x + 1);
        else if (a >= x && b > y) res += (y - a + 1);
        else if (a >= x && b <= y) res += (b - a + 1);
    }
    
    cout << res;
}