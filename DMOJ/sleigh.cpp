#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>

#define f first
#define s second

using namespace std;

#define MAXX 100001

vector<pair<int,int>> graph[MAXX];
int n, maxtraverse;

void dfs(int current, int previous, int distance){
    for (auto adjacent : graph[current]){
        if (adjacent.first != previous){
            dfs(adjacent.first, current, distance + adjacent.second);
        }
    }
    
    maxtraverse = max(maxtraverse, distance);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n;
    
    int total = 0;
    
    for (int i = 0; i < n; i ++){
        int u, v, w; cin >> u >> v >> w;
        
        total += w;
        
        graph[u].push_back({v, w});
        graph[v].push_back({u,w});
    }
    
    dfs(0, -1, 0);
    
    cout << total * 2 - maxtraverse;
}