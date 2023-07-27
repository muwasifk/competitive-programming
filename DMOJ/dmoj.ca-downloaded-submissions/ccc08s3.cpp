#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>

using namespace std;

char grid[21][21];
int visited[21][21];


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t; cin >> t;
    
    while (t --){
        queue<pair<int,int>> q;
        
        memset(grid, ' ', sizeof(grid));
        memset(visited, 0, sizeof(visited));
        
        int r, c; cin >> r >> c;
        
        for (int i = 0 ; i < r; i ++){
            string s; cin >> s;
            
            for (int j = 0; j < s.length(); j ++){
                grid[i][j] = s[j];
            }
        }
        
        
        
        q.push(pair<int,int>(0,0));
        visited[0][0] = 1;
            
        bool flag = false;
        
        // if (grid[r-1][c-1] == '*'){
        //     cout << 0 << endl; flag = true;
        // }
        
        while (!q.empty()){
            pair<int,int> current = q.front(); q.pop();
            
            if (current.first == r - 1 && current.second == c - 1){
                cout << visited[r-1][c-1] << endl; flag = true;
                break;
            }
            
            if (grid[current.first][current.second] == '+'){
                if (current.first + 1 < r && visited[current.first + 1][current.second] == 0 && grid[current.first + 1][current.second] != '*'){
                    q.push(pair<int,int> (current.first + 1, current.second));
                    visited[current.first + 1][current.second] = visited[current.first][current.second] + 1;
                }
                
                if (current.second - 1 >= 0 && visited[current.first][current.second - 1] == 0 && grid[current.first][current.second - 1] != '*'){
                    q.push(pair<int,int> (current.first, current.second - 1));
                    visited[current.first][current.second - 1] = visited[current.first][current.second] + 1;
                }
                
                if (current.first - 1 >= 0 && visited[current.first - 1][current.second] == 0 && grid[current.first - 1][current.second] != '*'){
                    q.push(pair<int,int> (current.first - 1, current.second));
                    visited[current.first - 1][current.second] = visited[current.first][current.second] + 1;
                }
                
                if (current.second + 1 < c && visited[current.first][current.second + 1] == 0 && grid[current.first][current.second + 1] != '*'){
                    q.push(pair<int,int> (current.first, current.second + 1));
                    visited[current.first][current.second  +1] = visited[current.first][current.second] + 1;
                }
            }else if (grid[current.first][current.second] == '|'){
                if (current.first + 1 < r && visited[current.first + 1][current.second] == 0 && grid[current.first + 1][current.second] != '*'){
                    q.push(pair<int,int> (current.first + 1, current.second));
                    visited[current.first + 1][current.second] = visited[current.first][current.second] + 1;
                }
                
                if (current.first - 1 >= 0 && visited[current.first - 1][current.second] == 0 && grid[current.first - 1][current.second] != '*'){
                    q.push(pair<int,int> (current.first - 1, current.second));
                    visited[current.first - 1][current.second] = visited[current.first][current.second] + 1;
                }
            }else if (grid[current.first][current.second] == '-'){
                if (current.second - 1 >= 0 && visited[current.first][current.second - 1] == 0 && grid[current.first][current.second - 1] != '*'){
                    q.push(pair<int,int> (current.first, current.second - 1));
                    visited[current.first][current.second - 1] = visited[current.first][current.second] + 1;
                }
                
                if (current.second + 1 < c && visited[current.first][current.second + 1] == 0 && grid[current.first][current.second] + 1 != '*'){
                    q.push(pair<int,int> (current.first, current.second + 1));
                    visited[current.first][current.second  +1] = visited[current.first][current.second] + 1;
                }
            }
        }
        
        if (flag == false){
            cout << -1 << endl;
        }
    }
    
    
}