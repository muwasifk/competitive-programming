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


/*
init: 

for (int i = 0; i < m ; i ++){
        int u, v ,w ; cin >> u >> v >> w;
        
        graph[u].push_back({v, w});
        graph[v].push_back({u,w});
    }
*/
