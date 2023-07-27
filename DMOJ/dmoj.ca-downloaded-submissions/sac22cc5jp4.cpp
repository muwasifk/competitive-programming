#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

#define f first
#define s second

#define MAXX 200001

int n;

int indeg [MAXX];

vector<int> graph[MAXX];

vector<int> topological;

void kahn(){
    queue<int> q;
    
    for (int i = 1; i <= n;i ++){
        if (indeg[i] == 0){
            q.push(i);
        }
    }
    
    while (q.empty() == false){
        int current = q.front(); q.pop();
        
        topological.push_back(current);
        
        for (int adjacent : graph[current]){
            if (--indeg[adjacent] == 0){
                q.push(adjacent);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n;
    
    for (int i = 1; i <= n; i ++){
        int m; cin >> m;
        
        for (int j = 1; j <= m; j ++){
            int c; cin >> c;
            
            graph[c].push_back(i);
            
            indeg[i] ++;
        }
    }
    
    kahn();
    
    for (int i = 0; i < n; i ++){
        cout << topological[i] << " ";
    }
}