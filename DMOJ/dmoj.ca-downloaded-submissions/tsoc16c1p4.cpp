// need to stop doing these at 2 A.M.

#include <iostream>
#include <algorithm>

#define MAXX 51

using namespace std;

int rn, cn;

char grid[MAXX][MAXX];

bool visited[MAXX][MAXX];

int counter = 0;

bool monke = false;

void floodfill(int r, int c){
    if ( r < 0 || r >= rn || c < 0 || c >= cn || (grid[r][c] != '.' && grid[r][c] != 'M') || visited[r][c] ) return;
    
    visited[r][c] = true;
    
    if (grid[r][c] == 'M') monke = true;
    
    floodfill(r, c+1); floodfill(r, c-1); floodfill(r+1, c); floodfill(r-1, c);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> rn >> cn;
    
    for (int i = 0; i < rn; i ++){
        for (int j = 0; j < cn; j ++){
            cin >> grid[i][j];
        }
    }
        
    for (int i = 0; i < rn; i ++){
        for (int j = 0; j < cn; j ++){
            if (!visited[i][j]){
                monke = false;
                floodfill(i, j);
                if (monke == true)
                    counter ++;
            }
        }
    }
    
    cout << counter;
    
}