#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

unordered_map<int, vector<int>> graph;
queue<int> q;
unordered_map<int, int> visited;
/*
void isReachable(int n){
    int c = 1;
    int d = 1;
    queue<int> pages;
    vector<int> seen;
    
    pages.push(1);
    seen.push_back(1);
    
    while (pages.size() != 0){
        d = pages.front();
        pages.pop();
        for (auto g = graph[d].begin(); g != graph[d].end(); g ++){
            if (find(seen.begin(), seen.end(), *g) == seen.end()){
                seen.push_back(*g);
                c++;
                pages.push(*g);
            }
        }
    }
    if (c == n){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }
}
*/
int main(){
    int n;
    cin >> n;
    
    int x;
    int y;
    for (int i = 1; i <= n; i ++){
        cin >> x;
        if (x != 0){
            for (int j = 0; j < x; j++){
                cin >> y;
                graph[i].push_back(y);
            }
        }else{
            graph[i] = {};
        }
        
    }
    
    
    
    q.push(1);
    visited[1] = 1;
    
    int current;
    
    int c = 1;
    int pathlength = 0;
    
    while (q.size() != 0){
        current = q.front();
        q.pop();
        
        if (graph[current].size() == 0){
            if (pathlength == 0){
                pathlength = visited[current];
            }
        }else{
            for (auto g = graph[current].begin(); g != graph[current].end(); g ++){
                if (visited.find(*g) == visited.end()){
                    visited[*g] = visited[current] + 1;
                    q.push(*g);
                    c ++;
                }
            }
        }
    }
    
    if (c == n){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }
    
    cout << pathlength;
    
    return 0;
    
}


//combine two bfs functions into one: retiain the value of shortest path but don't exit until q is empty then cout values