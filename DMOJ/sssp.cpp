#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

#define MAXX 10002

#define f first
#define s second

vector<pair<int,int>> graph[MAXX];

int distances[MAXX]; bool visited[MAXX];

void dijkstra(){
    
    fill(distances, distances + MAXX, INT_MAX);
    
    distances[1] = 0;
    
    priority_queue<pair<int,int>> q;
    
    q.push({0, 1});
    
    while (q.empty() == false){
        int current = q.top().s; q.pop();
        
        if (visited[current] == false){
            visited[current] = true;
            
            for (auto adjacent : graph[current]){
                int node = adjacent.f; int weight = adjacent.s;
                
                if (distances[current] + weight < distances[node]){
                    distances[node] = distances[current] + weight;
                    
                    q.push({-distances[node], node});
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m;
    
    for (int i = 0; i < m ; i ++){
        int u, v ,w ; cin >> u >> v >> w;
        
        graph[u].push_back({v, w});
        graph[v].push_back({u,w});
    }
    
    dijkstra();
    
    for (int i = 1; i <=n ; i ++){
        cout << (distances[i] == INT_MAX ? -1 : distances[i]) << endl;
    }
    
}