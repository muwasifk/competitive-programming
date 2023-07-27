// biject to wand travelling through graph !?
// very cool problem :)


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

vector<int> graph[MAXX];
bool visited[MAXX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m;
    
    for (int i = 0; i < m; i ++){int u, v; cin >> u >> v; graph[v].push_back(u);}
    
    memset(visited, false, sizeof(visited));
    
    queue<int> q;
    
    q.push(1);
    
    if (!graph[1].size()) visited[1] = true;
    
    while (q.empty() == false){
        int current = q.front(); q.pop();
        
        for (int adjacent : graph[current]){
            if (visited[adjacent] == false){
                q.push(adjacent); visited[adjacent] = true;
            }
        }
    }
    
    for (int i = 1; i <= n ; i ++){
        cout << visited[i];
    }
}