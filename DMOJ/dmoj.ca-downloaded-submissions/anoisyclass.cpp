#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

#define f first
#define s second

#define MAXX 10001

int graph[MAXX][MAXX];
int visited[MAXX];
bool failed = false;
int n;

void topological(int current){
    visited[current] = 1; // first visited state

    for (int adjacent = 1; adjacent <= n; adjacent ++){
        if (graph[current][adjacent] != 0){
            if (visited[adjacent] == 1){
                failed = true; // could not make topological sort because another node of state 1 has been found when there already exists one
                return;
            }

            if (visited[adjacent] == 0){
                topological(adjacent); // perform the sort on the enxt nodes
            }
        }
    }

    visited[current] = 2; // this node is done in the topological sort (will never come back here)
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int m; cin >> n >> m;
    
    for (int i = 0; i < m; i ++){
        int x, y; cin >> x >> y;
        
        graph[x][y] = 1;
        
    }
    
    topological(1);
    
    cout << (failed ? "N" : "Y");
}