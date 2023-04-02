#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, a; cin >> n >> a;
    
    double maxx = 1e6 + 3;
    int cnt = 0;
    for (int i = 1; i <= n; i ++){
        double x, y; cin >> x >> y;
        double ctan = atan2(y,x) * (180.0 / 3.141592);
        if (ctan < 0) ctan += 360;
        double diff = min(360-abs(a-ctan), abs(a-ctan));
        if (diff < maxx){
            maxx = diff;
            cnt = i;
        }
    }
    cout << cnt;
}