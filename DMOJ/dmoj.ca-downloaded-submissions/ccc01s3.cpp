#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int graph[27][27];
vector<string> inps;

queue<int> q;
bool visited[27] = {0};

bool bfs(int start, int end){
    while(q.empty() == false) q.pop();
    memset(visited, 0, sizeof(visited));
    
    q.push(start); visited[start] = true;
    
    while (q.empty() == false){
        int current = q.front(); q.pop();
        
        for (int adjacent = 0; adjacent < 26; adjacent ++){
            if (graph[current][adjacent] == 1 && visited[adjacent] == false){
                q.push(adjacent);
                visited[adjacent] = true;
            }
        }
        
        if (visited[end] == true) return true;
    }
    
    return false;
}

int main(){
    
    while (true){
        string inp; cin >> inp;
            
        if (inp == "**") break;
        
        inps.emplace_back(inp);
        
        graph[inp[0]-'A'][inp[1] - 'A'] = 1;
        graph[inp[1] - 'A'][inp[0]-'A'] = 1;
    }
    
    int counter = 0;
    
    for (string road : inps){
        graph[road[0]-'A'][road[1] - 'A'] = 0;
        graph[road[1] - 'A'][road[0]-'A'] = 0;
        
        if (bfs(0, 1) == false){
            counter ++;
            cout << road << endl;
        }
        
        graph[road[0]-'A'][road[1] - 'A'] = 1;
        graph[road[1] - 'A'][road[0]-'A'] = 1;
    }
    
    cout << "There are " << counter << " disconnecting roads." << endl;
}