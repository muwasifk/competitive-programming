#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>

using namespace std;

vector<int> tree[10001];

int farthest = 0;
int endnode = 0;

void dfs(int start, int parent, int distance){
    
    if (distance > farthest){
        endnode = start;
        farthest = distance;
    }
    
    for (int adjacent : tree[start]){
        if (adjacent != parent){
            dfs(adjacent, start, distance + 1);
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    for (int i = 0 ; i < n - 1; i ++){
        int u, v; cin >> u >> v;
        
        tree[u].push_back(v); tree[v].push_back(u);
    }
    
    dfs(1, 0, 0);
    
    farthest = 0; // reset to do dfs another time
    
    dfs(endnode, 0, 0);
    
    cout << farthest;
    
}