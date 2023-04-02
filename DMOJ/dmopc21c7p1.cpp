#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1500

int grid[MAX][MAX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m;
    
    for (int i = 0; i < n; i ++) for (int j = 0; j < m; j ++) cin >> grid[i][j];
    
    if (grid[0][0] == 0) grid[0][0] = 1;
    
    for (int j = 1; j < m; j ++)
        if (grid[0][j] == 0)
            grid[0][j] = grid[0][j-1] + 1;
    
    for (int i = 1; i < n; i ++)
        if (grid[i][0] == 0)
            grid[i][0] = grid[i-1][0] + 1;
    
    for (int i = 1; i < n; i ++){
        for (int j = 1; j < m ; j ++){
            if (grid[i][j] == 0)
            {grid[i][j] = max(grid[i-1][j], grid[i][j-1]) + 1;}
        }
    }
    
    for (int i = 0; i < n - 1; i ++){
        for (int j = 1; j < m ; j ++){
            if (grid[i][j] <= grid[i][j-1] || grid[i][j] >= grid[i+1][j]){
                cout << -1; return 0;}
        }
    }
    
    for (int i = 1; i < n; i ++){
        if (grid[i][0] <= grid[i-1][0]){
            cout << -1; return 0; 
        }
    }
    
    for (int j = 1; j < m; j ++){
        if (grid[n-1][j] <= grid[n-1][j-1]){
            cout << -1; return 0;
        }
    }
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j ++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}