#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

#define f first
#define s second

struct DSU {
    
    vector<int> e;
    
    // Init the actual DSU
    DSU(int N) { e = vector<int>(N, -1); }
    
    // Get the head of the node
    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
    
    // Check if two nodes are connected
    bool same_set(int a, int b) { return get(a) == get(b); }
    
    // Return the size of a path from a node
    int size(int x) { return -e[get(x)]; }
    
    // Merge two nodes together (+ their paths) with rank
    bool unite(int x, int y) {
        
        x = get(x); y = get(y);
        
        if (x == y) return false;
        
        if (e[x] > e[y]) swap(x, y);
        
        e[x] += e[y]; e[y] = x;
        
        
        return true;
        
    }
    
};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m; DSU dsu(n + 1);
    
    for (int i = 0 ; i < m ; i ++){
        int x, y; cin >> x >> y;
        
        dsu.unite(x, y);
    }
    
    int u , v; cin >> u >> v;
    
    if (dsu.same_set(u, v)){
        cout << 1;
    }else{
        cout << 0;
    }
}