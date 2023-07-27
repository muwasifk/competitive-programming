#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, a, b;

unordered_map<int, vector<int>> graph;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m >> a >> b;
    
    if (a == b){
        cout << "GO SHAHIR!"; return 0;
    }
    
    for (int i = 0; i < m; i ++){
        int x, y;
        cin >> x >> y;
        
        graph[x].emplace_back(y); graph[y].emplace_back(x);
    }
    
    vector<int> visited = {a};
    
    queue<int> q;
    
    q.push(a);
    while (!q.empty()){
        int cur = q.front();
        visited.push_back(cur);
        q.pop();
        
        for (int i = 0; i < graph[cur].size(); i ++){
            if (find(visited.begin(), visited.end(), graph[cur][i]) == visited.end()){
                visited.push_back(graph[cur][i]);
                q.push(graph[cur][i]);
                
                if (graph[cur][i] == b){
                    cout << "GO SHAHIR!"; return 0;
                }
            }
        }
    }
    
    cout << "NO SHAHIR!"; return 0;
}