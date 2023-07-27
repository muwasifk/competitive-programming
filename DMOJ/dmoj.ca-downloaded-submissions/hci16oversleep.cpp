#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

#define MAXX 1001

char grid[MAXX][MAXX];

int visited[MAXX][MAXX] = {0};

queue<pair<int,int>> q;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m; cin >> n >> m;
    
    pair<int, int> start;
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            cin >> grid[i][j];
            if (grid[i][j] == 's'){
                start.first = i;
                start.second = j;
            }
        }
    }
    
    q.push(start);
    visited[start.first][start.second] = 1;
    
    pair<int, int> current;
    
    while (q.size() != 0){
        current = q.front(); q.pop();
        
        if (grid[current.first][current.second] == 'e'){
            cout << visited[current.first][current.second] - 2;
            return 0;
        }else{
            if ((grid[current.first + 1][current.second] == '.' ||grid[current.first + 1][current.second] == 'e') && visited[current.first + 1][current.second] == 0){
                q.push(pair<int,int>(current.first + 1, current.second));
                visited[current.first + 1][current.second] = visited[current.first][current.second] + 1;
            }
            
            if ((grid[current.first][current.second - 1] == '.' || grid[current.first][current.second - 1] == 'e') && visited[current.first][current.second - 1] == 0){
                q.push(pair<int,int>(current.first, current.second-1));
                visited[current.first][current.second - 1] = visited[current.first][current.second] + 1;
            }
            
            if ((grid[current.first - 1][current.second] == '.' || grid[current.first - 1][current.second] == 'e') && visited[current.first - 1][current.second] == 0){
                q.push(pair<int,int>(current.first - 1, current.second));
                visited[current.first - 1][current.second] = visited[current.first][current.second] + 1;
            }
            
            if ((grid[current.first][current.second + 1] == '.' || grid[current.first][current.second + 1] == 'e') && visited[current.first][current.second + 1] == 0){
                q.push(pair<int,int>(current.first, current.second+1));
                visited[current.first][current.second + 1] = visited[current.first][current.second] + 1;
            }
        }
    }
    
    cout << -1;
    
    return 0;
    
}