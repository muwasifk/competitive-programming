#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;

#define f first

#define s second

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

vector<pair<int, pair<int, int>>> ed;
int n, m;

int cnt = 0;

vector<int> ans;

void kruskal(){
    DSU dsu(n+1);
    for (auto a : ed){
        if (dsu.unite(a.s.f, a.s.s)){
            ans.push_back(a.f);
            cnt ++;
        }
    }
}

int main() {
    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n >> m;
    
    int u, v;
    int wc = 1;
    while (m--){
        cin >> u >> v;
        pair<int, int> y; y.first = u; y.second = v;
        pair<int, pair<int, int>> z; z.first = wc; z.second = y;
        ed.push_back(z);
        wc ++; 
    }
    
    kruskal();
    
    if (cnt == n-1){
        for (auto i : ans){
            cout << i << endl;
        }
    }else{
        cout << "Disconnected Graph";
    }
    
}