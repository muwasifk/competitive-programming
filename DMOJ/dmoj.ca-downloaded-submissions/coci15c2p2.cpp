#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;

#define f first

#define s second

//struct DSU {
//
//    vector<int> e;
//
//    DSU(int N) { e = vector<int>(N, -1); }
//
//    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }
//
//
//    bool same_set(int a, int b) { return get(a) == get(b); }
//
//
//    int size(int x) { return -e[get(x)]; }
//
//
//    bool unite(int x, int y) {
//
//        x = get(x); y = get(y);
//
//        if (x == y) return false;
//
//        if (e[x] > e[y]) swap(x, y);
//
//        e[x] += e[y]; e[y] = x;
//
//
//        return true;
//
//    }
//
//};
//
//vector<pair<int, pair<int, int>>> ed;
//
//int cnt = 0;
//
//vector<int> ans;
//
//void kruskal(){
//    DSU dsu(n+1);
//    for (auto a : ed){
//        if (dsu.unite(a.s.f, a.s.s)){
//            ans.push_back(a.f);
//            cnt ++;
//        }
//    }
//}



#define MAXX 23
int n, m;

vector<int> conflict[MAXX];
vector<bool> visited(MAXX);

int rec(int current){
    if (current == n + 1){
        return 1;
    }
    
    int ret = rec(current + 1);
    
    bool flag = false;
    
    for (auto ing : conflict[current]){
        if (visited[ing] == true){
            flag = true; break;
        }
    }
    
    if (flag == false){
        visited[current] = true;
        ret += rec(current + 1);
        visited[current] = false;
    }
    
    return ret;
}

int main() {
    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n >> m;
    
    while (m--){
        int u, v; cin >> u >> v;
        
        conflict[u].push_back(v); conflict[v].push_back(u);
    }
    
    int c = rec(1);
    cout << c;
}