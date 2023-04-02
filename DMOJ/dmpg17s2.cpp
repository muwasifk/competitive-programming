#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;


struct DSU {

    vector<int> e;

    DSU(int N) { e = vector<int>(N, -1); }

    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }


    bool same_set(int a, int b) { return get(a) == get(b); }


    int size(int x) { return -e[get(x)]; }


    bool unite(int x, int y) {

        x = get(x); y = get(y);

        if (x == y) return false;

        if (e[x] > e[y]) swap(x, y);

        e[x] += e[y]; e[y] = x;
        
        
        return true;

    }

};



int main() {
    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, q; cin >> n >> q;
    
    DSU dsu (n + 1);
    
    for (int i = 0; i < q; i ++){
        char cmd; int x, y;
        cin >> cmd >> x >> y;
        if (cmd == 'A'){
            dsu.unite(x, y);
        }else if (cmd == 'Q'){
         if (dsu.same_set(x, y)) cout << "Y" << endl;
         else cout << "N" << endl;
        }
    }
}