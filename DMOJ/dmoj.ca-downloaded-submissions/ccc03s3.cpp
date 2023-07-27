#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>

using namespace std;

// remember to change when submitting
#define MAXX 26

char grid[MAXX][MAXX];

int rn, cn;

bool visited[MAXX][MAXX];

int cursize = 0;

vector<int> sizes;

void floodfill(int r, int c){
    if ( r < 0 || r >= rn || c < 0 || c >= cn || grid[r][c] != '.' || visited[r][c] ) return;
    
    visited[r][c] = true;
    cursize ++;
    
    floodfill(r, c+1); floodfill(r, c-1); floodfill(r+1, c); floodfill(r-1, c);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int maxfloor; cin >> maxfloor;
    
    cin >> rn >> cn;
    
    for (int i = 0; i < rn; i ++){
        for (int j = 0; j < cn; j ++){
            cin >> grid[i][j];
        }
    }
    
    
    for (int i = 0; i < rn; i ++){
        for (int j = 0; j < cn; j ++){
            if (!visited[i][j]){
                cursize = 0;
                floodfill(i, j);
                if (cursize != 0)
                sizes.emplace_back(cursize);
            }
        }
    }
    
    sort(sizes.begin(), sizes.end(), greater<int>());
    
    int indx = 0;
    
    for (int i = 0; i < sizes.size(); i ++){
        if (maxfloor - sizes[indx] >= 0){
            maxfloor -= sizes[indx];
            indx ++;
        }else{
            break;
        }
    }
    
    if (indx == 1){
        cout << indx << " room, " << maxfloor << " square metre(s) left over";
    }else{
        cout << indx<< " rooms, " << maxfloor << " square metre(s) left over";
    }
    
    return 0;
}