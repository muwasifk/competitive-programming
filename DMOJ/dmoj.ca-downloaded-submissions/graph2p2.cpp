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



#define MAXX 1001

int graph[MAXX][MAXX];
int visited[MAXX];
int n;

bool failed = false;

void topological(int current){
    visited[current] = 1; // first visited state
    
    for (int adjacent = 1; adjacent <= n; adjacent ++){
        if (graph[current][adjacent] != 0){
            if (visited[adjacent] == 1){
                failed = true; // could not make topological sort because another node of state 1 has been found when there already exists one
                return;
            }
            
            if (visited[adjacent] == 0){
                topological(adjacent); // perform the sort on the enxt nodes
            }
        }
    }
    
    visited[current] = 2; // this node is done in the topological sort (will never come back here)
}

int main() {
    
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n;
    
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) cin >> graph[i][j];
    
    for(int i=1; i<=n; i++) if(visited[i] == 0) topological(i);
    
    if (failed == true){
        cout << "NO";
    }else{
        cout << "YES";
    }
}