#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring> // remember to import this ugh 

using namespace std;

#define MAXX 101

bool visited[MAXX];
int ants[MAXX] = {0};
int distances[MAXX];

vector<int> graph[MAXX];

queue<int> q;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m, k; cin >> n >> m;
    
    for (int i = 0; i < m; i ++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); graph[v].push_back(u);
    }
    
    cin >> k;
    
    for (int i = 0; i < k; i ++){
        int u; cin >> u;
        q.push(u);
        visited[u] = true;
    }
    
    while (q.empty() == false){
        int current = q.front(); q.pop();
        
        for (int adj : graph[current]){
            if (visited[adj] == false){
                q.push(adj);
                visited[adj] = true;
                ants[adj] = ants[current] + 4;
            }
        }
    }
    
    memset(visited, false, sizeof(visited));
    q.push(1);
    
    visited[1] = true;
    
    while (q.empty() != true){
        int current = q.front(); q.pop();
        for (int adj : graph[current]){
            if (visited[adj] == false && distances[current] + 1 < ants[adj]){
                q.push(adj);
                distances[adj] = distances[current] + 1;
                visited[adj] = true;
            }
        }
    }
    
    if (visited[n] == true){
        cout << distances[n];
    }else{
        cout << "sacrifice bobhob314";
    }

}