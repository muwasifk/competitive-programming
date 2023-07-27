#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>

#define f first
#define s second

using namespace std;

#define MAXX 500001

vector<int> graph[MAXX];

int furthest = 0;
int distances[MAXX], distancesx[MAXX];
int node;

void diameter(int current, int parent, int distance){
    distances[current] = distance;
    
    if (distance > furthest) {
        furthest = distance;
        node = current;
    }
    
    for (auto adjacent : graph[current]){
        if (adjacent != parent){
            diameter(adjacent, current, distance + 1);
        }
    }
}

void diameterx(int current, int parent, int distance){
    distancesx[current] = distance;
    
    if (distance > furthest) {
        furthest = distance;
        node = current;
    }
    
    for (auto adjacent : graph[current]){
        if (adjacent != parent){
            diameterx(adjacent, current, distance + 1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    
    for (int i = 0; i < n - 1; i ++){
        int u, v; cin >> u >> v;
        
        graph[u].push_back(v); graph[v].push_back(u);
    }
    
    diameter(1, 0, 0);
    
    furthest = 0; // reset for second traversal
    
    diameter(node, 0, 0);
    
    furthest = 0;
    
    diameterx(node, 0 , 0);
    
    for (int i = 1; i <= n; i ++){
        cout << max(distances[i], distancesx[i]) + 1 << endl;
    }
}