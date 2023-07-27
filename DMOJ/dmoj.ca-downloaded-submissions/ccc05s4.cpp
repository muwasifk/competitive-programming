#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

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

vector<string> names;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int l, n; cin >> l;
    
    while (l --){
        
        vector<string> names; 
        
        cin >> n;
        
        for (int i = 0; i < n; i ++){
            string name; cin >> name;
            
            names.push_back(name);
        }
        
        int depth = 0, current = -1;
        
        unordered_map<string, int> m;
        
        for (int i = n - 1; i >= 0; i --){
            if (m.count(names[i]) == 0){
                m[names[i]] = ++current;
                
                depth = max(depth, current);
                
            }else{
                current = m[names[i]];
            }
        }
        
        cout << 10*n - 20*depth << endl;
    }
    
    
}