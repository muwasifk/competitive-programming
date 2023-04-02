#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <queue>

using namespace std;

unordered_map<int, vector<int>> graph;
queue<int> q;
set<int> pages;
unordered_map<int, int> visited;

int main(){
    int n;
    cin >> n;
    cout << n << endl; 
    
    pages.insert(1);
    
    int x;
    int y;
    for (int i = 1; i <= n; i ++){
        cin >> x;
        cout << x << " "; 
        if (x != 0){
            for (int j = 0; j < x; j++){
                cin >> y;
                cout << y << " ";
                graph[i].push_back(y);
                pages.insert(y);
            }
        }else{
            graph[i] = {};
        }
        
    }
    
    cout << endl; /*
    int c = 0;
    for (int i = 1; i <= n; i ++){
        if (pages.find(i) != pages.end()){
            c ++;
        }
    }
    *//*
    if (c != n){
        cout << "N" << endl;
    }else{
        cout << "Y" << endl;
    }
    */
    /*
    q.push(1);
    visited[1] = 1;
    
    int current;
    
    while (q.size() != 0){
        current = q.front();
        q.pop();
        
        if (graph[current].size() == 0){
            cout << visited[current];
            return 0;
        }else{
            for (auto g = graph[current].begin(); g != graph[current].end(); g ++){
                if (visited.find(*g) == visited.end()){
                    visited[*g] = visited[current] + 1;
                    q.push(*g);
                }
            }
        }
    }
    */
    cout << "1";
    return 0;
    
}