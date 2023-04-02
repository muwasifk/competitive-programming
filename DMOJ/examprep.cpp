#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;


vector<long long int> values = {-1};


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
        
        values[x] += values[y];
        
        return true;

    }

};



int main() {
    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    
    int n, q; cin >> n >> q;
    
    DSU dsu (n + 1);
    
    for (int i = 0; i < n; i ++){
        int x; cin >> x;
        values.push_back(x);
    }
    
    for (int i = 0; i < q; i ++){
        int cmd; cin >> cmd;
        
        if (cmd == 1){
            int a, b; cin >> a >> b;
            dsu.unite(a, b);
        }else if (cmd == 2){
            int a; cin >> a;
            cout << dsu.size(a) << endl;
        }else if (cmd == 3){
            int a; cin >> a;
            cout << values[dsu.get(a)] << endl;
        }
    }
}