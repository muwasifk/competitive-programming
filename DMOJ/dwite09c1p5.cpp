#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

#define MAXX 105

vector<int> graph[MAXX];
int visited[MAXX];
int distances[MAXX];

int length = 0;

void dfs(int current){
    
    visited[current] = 1;
    
    for (int v : graph[current]){
        
        if (visited[v] == 1){
            length = distances[v] - distances[current];
            return;
        }else if (visited[v] == 0){
            distances[v] = distances[current] + 1;
            dfs(v);
        }
        
    }
    
    visited[current] = 2;
    
}

int main(){
    
    for (int t = 0; t < 5; t ++){
        
        memset(distances, 0, sizeof(distances));
        memset(visited, 0 , sizeof(visited));
        
        for (int i = 0; i < MAXX; i ++){
            graph[i].clear();
        }
        
        int n; cin >> n;
        
        for (int i = 0; i < n; i ++){
            int u, v; cin >> u >> v; graph[u].push_back(v);
        }
        visited[1] = true;
        distances[1] = 0;
        dfs(1);
        
        cout << abs(length) + 1 << endl;
    }
}