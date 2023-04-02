#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

const int MAXX = 30001; // REMEMBER TO CHANGE THIS 

int timex[MAXX];
bool visited[MAXX];

vector<int> graph[MAXX];

queue<int> q;

int main(){
    int n, m;
    cin >> n >> m;
    
    for(int i=0; i < m; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); graph[v].push_back(u);
    }
    
    int k; cin >> k;
    for(int i = 0; i < k; i ++) {
        int u; cin >> u;
        q.push(u);
        visited[u] = true;
    }
    
    int ans = 0;
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        
        ans = timex[cur];
        
        for(int adj : graph[cur]){
            if(visited[adj] == false){
                q.push(adj);
                visited[adj] = true;
                timex[adj] = timex[cur] + 1;
            }
        }
    }
    cout << ans << endl;
}