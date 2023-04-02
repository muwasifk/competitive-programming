#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

#define MAXX 10002

#define f first
#define s second

int n, m, b, q;

vector<pair<int,int>> graph[MAXX];

int distances[MAXX]; bool visited[MAXX];
int prices[MAXX]; vector<int> hubs;
void dijkstra(){
    
    fill(distances, distances + MAXX, INT_MAX);
    
    distances[b] = 0;
    
    priority_queue<pair<int,int>> q;
    
    q.push({0, b});
    
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
    
    cin >> n >> m;
    
    for (int i = 0; i < m ; i ++){
        int x, y, z ; cin >> x >> y >> z;
        
        graph[x].push_back({y, z});
        graph[y].push_back({x,z});
    }
    
    
    
    cin >> q;
    
    for (int i = 0; i < q; i ++){
        int jk, kl; cin >> jk >> kl;
        
        prices[jk] = kl;
        hubs.push_back(jk);
    }
    
    
    cin >> b;
    dijkstra();
    int minn = INT_MAX;
    for (auto x : hubs){
        minn = min(minn, distances[x] + prices[x]);
    }
    cout << minn;
}