#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

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

//void topological(int current){
//    visited[current] = 1; // first visited state
//
//    for (int adjacent = 1; adjacent <= n; adjacent ++){
//        if (graph[current][adjacent] != 0){
//            if (visited[adjacent] == 1){
//                failed = true; // could not make topological sort because another node of state 1 has been found when there already exists one
//                return;
//            }
//
//            if (visited[adjacent] == 0){
//                topological(adjacent); // perform the sort on the enxt nodes
//            }
//        }
//    }
//
//    visited[current] = 2; // this node is done in the topological sort (will never come back here)
//}

//void floodfill(int r, int c, int color){ // COLOR IS THE ACCEPTED FLOOR CHARACTER
//
//    if (
//
//        (r < 0 || r >= row_num || c < 0 || c >= col_num)  // if out of bounds
//
//        || grid[r][c] != color  // wrong color
//
//        || visited[r][c]  // already visited this square
//
//    ) return;
//
//
//    visited[r][c] = true; // mark current square as visited
//
//    curr_size++; // increment the size for each square we visit
//
//
//    // recursively call flood fill for neighboring squares
//
//    floodfill(r, c + 1, color);
//
//    floodfill(r, c - 1, color);
//
//    floodfill(r - 1, c, color);
//
//    floodfill(r + 1, c, color);
//
//}

#define MAXN 1001

vector<int> paths[MAXN];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    DSU dsu (n + 1);
    
    for (int i = 1; i <= n; i ++ ) {
        for (int j = 1; j <= n; j++) {
            int u; cin >> u;
            if (u == 1){
                dsu.unite(i, j);
            }
        }
    }
    
    for (int i = 1; i <=n; i ++){
        paths[dsu.get(i)].emplace_back(i);
    }
    
    for (int i = 1; i <=n; i ++){
        if (paths[i].size() != 0){
            for (int node : paths[i]){
                cout << node << ' ';
            }
            cout << endl;
        }
        
    }
    
    
}