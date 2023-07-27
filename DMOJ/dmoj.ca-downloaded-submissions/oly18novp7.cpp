#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <queue>
#include <algorithm>

using namespace std;

int x, y;

unordered_map<int, vector<int>> graph;
unordered_map<int, int> prevn;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> x >> y;
    
    queue<int> q;
    
    vector<int> visited = {x};
    
    q.push(x);
    prevn[x] = 0;
    int cur;
    while (!q.empty()){
        cur = q.front();
        q.pop();
        
        if (find(visited.begin(), visited.end(), cur - 1) == visited.end()){
            visited.push_back(cur - 1);
            q.push(cur - 1);
            prevn[cur-1] = cur;
            
            if (cur - 1 == y){
                break;
            }
        }
        
        if (find(visited.begin(), visited.end(), cur + 1) == visited.end()){
            visited.push_back(cur + 1);
            q.push(cur + 1);
            prevn[cur+1] = cur;
            
            if (cur + 1 == y){
                break;
            }
        }
        
        if (find(visited.begin(), visited.end(), cur * 2) == visited.end()){
            visited.push_back(cur * 2);
            q.push(cur * 2);
            prevn[cur*2] = cur;
            
            if (cur * 2 == y){
                break;
            }
        }
        
    }
    
    int gg = cur;
    int c = 0;
    while (gg != 0){
        gg = prevn[cur];
        cur = prevn[cur];
        c ++;
    }
    
    cout << c;
    
}