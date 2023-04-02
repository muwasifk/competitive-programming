#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>

#define f first
#define s second

using namespace std;

#define MAXX 101

char grid[MAXX][MAXX];
bool visited[MAXX][MAXX];

int row_num, col_num;

void floodfill(int r, int c, char color){

    if (

        (r < 0 || r >= row_num || c < 0 || c >= col_num)

        || grid[r][c] != color

        || visited[r][c]

    ) return;


    visited[r][c] = true;

    floodfill(r, c + 1, color);

    floodfill(r, c - 1, color);

    floodfill(r - 1, c, color);

    floodfill(r + 1, c, color);

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> row_num >> col_num;
    
    for (int i = 0; i < row_num; i ++){
        string s; cin >> s;
        
        for (int j = 0 ; j < s.length(); j ++){
            grid[i][j] = s[j];
        }
    }
    
    int counter = 0;
    for (int i = 0; i < row_num; i ++){
        for (int j = 0; j < col_num; j ++){
            if (grid[i][j] == '.' && ! visited[i][j]){
                floodfill(i, j, '.');
                counter ++;
            }
        }
    }
    
    cout << counter;
    
}