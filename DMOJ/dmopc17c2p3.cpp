#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>

#define MAXX 200001

using namespace std;

vector<int> graph[MAXX];
bool visited[MAXX];
int distances[MAXX], previous[MAXX];

int main(){

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, r; cin >> n >> r;
    
    for (int i = 0; i < n - 1; i ++){
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    queue<int> q;
    
    for (int i = 0; i < r; i ++){
        int node; cin >> node;
        q.push(node);
        visited[node] = true;
    }
    
    while (q.empty() == false){
        int current = q.front(); q.pop();
        
        for (int adjacent : graph[current]){
            if (visited[adjacent] == false){
                distances[adjacent] = distances[current] + 1;
                visited[adjacent] = true;
                q.push(adjacent);
            }
        }
    }
    
    memset(visited, 0, sizeof(visited));
    
    int x, y; cin >> x >> y;
    
    q.push(x); visited[x] = 1; previous[x] = -5;
    
    while(q.empty() == false){
        int current = q.front(); q.pop();
        
        for (int adjacent : graph[current]){
            if (visited[adjacent] == false){
                previous[adjacent] = current;
                visited[adjacent] = true;
                q.push(adjacent);
            }
        }
    }
    
    int ret = n + 1;
    
    for (int node = y; node != -5; node = previous[node]){
        ret = min(ret, distances[node]);
    }
    
    cout << ret;
}