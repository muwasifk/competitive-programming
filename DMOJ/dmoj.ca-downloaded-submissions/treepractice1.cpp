#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>

#define f first
#define s second

using namespace std;

#define MAXX  500001

vector<pair<int, int>> graph[MAXX];
int diameter;
int furthest;
int radius = INT_MAX;

int distances[MAXX], previous[MAXX];

void dfs(int node, int parent, int dist){
    previous[node] = parent;
    
    distances[node] = dist;
    
    if (distances[node] > diameter){
        furthest = node;
        diameter = distances[node];
    }
    
    for (auto adjacent : graph[node]){
        if (adjacent.f != parent)
            dfs(adjacent.f, node, dist + adjacent.s);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    
    for (int i = 1; i < n ; i ++){
        int u, v, w; cin >> u >> v >> w;
        
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    
    diameter = 0;
    
    dfs(1, -1, 0);
    
    diameter = 0;
    
    dfs(furthest, -1 , 0);
    
    for (int current = furthest; current != -1; current = previous[current]){
        radius = min(max(diameter - distances[current], distances[current]), radius);
    }
    
    cout << diameter << endl << radius;
    
    
}