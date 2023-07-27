#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct coord{
    long double x, y;
};

bool comp(const coord &a, const coord &b){
    return a.x < b.x;
}

vector<coord> v;

int main(){
    int n; cin >> n;
     

    long double l = 0;
    for (int mm = 0; mm < n; mm ++){
        long double x,y;
        cin >> x >> y; coord gg = {x,y}; v.push_back(gg);
    }

    sort(v.begin(), v.end(), comp);

    long double xo = v[0].x, yo = v[0].y;

    for (int mm = 1; mm < n; mm ++){
        long double x = v[mm].x; long double y = v[mm].y;
        
        long double v = (y-yo)/(x-xo);
        
        v = abs(v);
        
        if (v > l) l = v;
        
        xo = x; yo = y;
    }

    cout << l;

}