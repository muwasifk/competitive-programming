#include <iostream>
#include <algorithm> 

using namespace std; 

#define maxx 1001

int grid[maxx][maxx];

int main(){ 

    int n; cin >> n; 
    int maax = 0; 

    for (int i = 1; i <= n; i ++) for (int j = 1; j <= n; j ++) cin >> grid[i][j]; 

    for (int i = 2; i <= n; i ++){
        for (int j = 2; j <= n; j ++){
            if (grid[i][j] != 0){
                if (grid[i-1][j] != grid[i][j-1]) {
                    grid[i][j] = min(grid[i-1][j], grid[i][j-1]) + 1; 
                }else{
                    if (grid[i-grid[i-1][j]][j-grid[i-1][j]] != 0) 
                        grid[i][j] = grid[i-1][j] + 1; 
                    else 
                        grid[i][j] = grid[i-1][j]; 
                }
                maax = max (maax , grid[i][j]); 
            }
        }
    }

    int counter =0; 
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= n ; j ++){
            if (grid[i][j] == maax) counter ++; 
        }
    }

    cout << (counter * maax); 

}