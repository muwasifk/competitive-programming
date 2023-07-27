#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>

#define f first
#define s second

using namespace std;

int colours[1000001], distances[1000001];
bool visited[1000001];
vector<int> graph[1000001];
vector<pair<int,int>> v1[1000001], v2[1000001];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m;
    
    for (int i = 1; i <= n; i ++){
        cin >> colours[i];
    }
    
    for (int i = 1; i <= m; i ++){
        int u, v; cin >> u >> v;
        
        graph[u].push_back(v); graph[v].push_back(u);
    }
    
    // -- BFS NUMBER 1
    memset(visited, 0 , sizeof(visited));
    queue<int> q;
    
    q.push(1); distances[1] = 0; visited[1] = true;
    
    while (q.empty() == false){
        int current = q.front(); q.pop();
        
        if (v1[colours[current]].size() < 2){
            v1[colours[current]].push_back({current, distances[current]});
        }
        
        for (int adjacent : graph[current]){
            if (visited[adjacent] == false){
                q.push(adjacent); distances[adjacent] = distances[current] + 1; visited[adjacent] = true;
            }
        }
    }
    
    // BFS NUMBER 2 (REVERSE DIRECTION)
    
    memset(visited, 0 , sizeof(visited));
    
    q.push(n); distances[n] = 0; visited[n] = true;
    
    while (q.empty() == false){
        int current = q.front(); q.pop();
        
        if (v2[colours[current]].size() < 2){
            v2[colours[current]].push_back({current, distances[current]});
        }
        
        for (int adjacent : graph[current]){
            if (visited[adjacent] == false){
                q.push(adjacent); distances[adjacent] = distances[current] + 1; visited[adjacent] = true;
            }
        }
    }
    
    //
    
    int ret = INT_MAX;
    
    for (int i = 1; i <= n; i ++){
        for (auto alpha: v1[i]){
            for (auto beta : v2[i]){
                if (beta.f != alpha.f){
                    ret = min(ret, alpha.s + beta.s);
                }
            }
        }
    }
    
    if (ret == INT_MAX) cout << -1;
    else cout << ret;
    
}