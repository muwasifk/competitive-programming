#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

// remember to change when submitting
#define MAXX 51

char grid[MAXX][MAXX];

int visited[MAXX][MAXX] = {0};



int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    
    while (t --){
        
        int flag = 0;
        
        queue<pair<int,int>> q;
        
        memset(grid, 'O', sizeof(grid));
        memset(visited, 0,  sizeof(visited));
        
        
        int n, m; cin >> n >> m;
        
        pair<int, int> start;
        
        for (int i = 0; i < m; i ++){
            for (int j = 0; j < n; j ++){
                cin >> grid[i][j];
                if (grid[i][j] == 'C'){
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
            
            if (visited[current.first][current.second] > 60){
                cout << "#notworth" << endl;
                flag = 1;
                break;
            }
            
            if (grid[current.first][current.second] == 'W'){
                cout << visited[current.first][current.second] - 1 << endl;
                flag = 2;
                break;
            }else{
                if (current.first + 1 >= 0 && current.first + 1 < m && (grid[current.first + 1][current.second] == 'O' ||grid[current.first + 1][current.second] == 'W') && visited[current.first + 1][current.second] == 0){
                    q.push(pair<int,int>(current.first + 1, current.second));
                    visited[current.first + 1][current.second] = visited[current.first][current.second] + 1;
                }
                
                if (current.second - 1 >= 0 && current.second - 1 < n && (grid[current.first][current.second - 1] == 'O' || grid[current.first][current.second - 1] == 'W') && visited[current.first][current.second - 1] == 0){
                    q.push(pair<int,int>(current.first, current.second-1));
                    visited[current.first][current.second - 1] = visited[current.first][current.second] + 1;
                }
                
                if (current.first - 1 >= 0 && current.first - 1 < m && (grid[current.first - 1][current.second] == 'O' || grid[current.first - 1][current.second] == 'W') && visited[current.first - 1][current.second] == 0){
                    q.push(pair<int,int>(current.first - 1, current.second));
                    visited[current.first - 1][current.second] = visited[current.first][current.second] + 1;
                }
                
                if (current.second + 1 >= 0 && current.second + 1 < n && (grid[current.first][current.second + 1] == 'O' || grid[current.first][current.second + 1] == 'W') && visited[current.first][current.second + 1] == 0){
                    q.push(pair<int,int>(current.first, current.second+1));
                    visited[current.first][current.second + 1] = visited[current.first][current.second] + 1;
                }
            }
        }
        
        if (flag == 0){
            cout << "#notworth" << endl;
        }
        
        
        
    }
    
    
    return 0;
    
}