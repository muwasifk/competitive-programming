#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>


using namespace std;

#define MAXX 1502

int grid[MAXX][MAXX];
int distances[MAXX][MAXX];

deque<pair<int, pair<int,int>>> dq;

int main(){

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m, k; cin >> n >> m >>k;
    
    memset(grid, -1, sizeof(grid));
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> grid[i][j];
            if(grid[i][j] > 0){
                dq.push_back({grid[i][j], {i, j}});
            }
        }
    }
    
    sort(dq.begin(), dq.end());
    
    while (dq.empty() == false){
        auto current = dq.front(); dq.pop_front();
        
        if (distances[current.second.first][current.second.second] < k){
            if (grid[current.second.first + 1][current.second.second] == 0){
                distances[current.second.first + 1][current.second.second] = distances[current.second.first][current.second.second] + 1;
                grid[current.second.first + 1][current.second.second] = current.first;
                dq.push_back({current.first, {current.second.first + 1, current.second.second}});
            }
            
            if (grid[current.second.first - 1][current.second.second] == 0){
                distances[current.second.first - 1][current.second.second] = distances[current.second.first][current.second.second] + 1;
                grid[current.second.first- 1][current.second.second] = current.first;
                dq.push_back({current.first, {current.second.first - 1, current.second.second}});
            }
            
            if (grid[current.second.first][current.second.second + 1] == 0){
                distances[current.second.first][current.second.second + 1] = distances[current.second.first][current.second.second] + 1;
                grid[current.second.first][current.second.second + 1] = current.first;
                dq.push_back({current.first, {current.second.first, current.second.second + 1}});
            }
            
            if (grid[current.second.first][current.second.second - 1] == 0){
                distances[current.second.first][current.second.second - 1] = distances[current.second.first][current.second.second] + 1;
                grid[current.second.first][current.second.second - 1] = current.first;
                dq.push_back({current.first, {current.second.first, current.second.second - 1}});
            }
            
        }
    }
    
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= m; j ++){
            cout << grid[i][j] << " ";
            if (j == m){
                cout << endl;
            }
        }
    }
    
}