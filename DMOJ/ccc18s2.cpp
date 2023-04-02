#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

vector<vector<ll>> grid(100, vector<ll> (100));
vector<vector<ll>> gridx(100, vector<ll> (100));

void copyv(){
    for (int i = 0; i < grid[0].size(); i ++){
        for (int j = 0; j < grid[0].size(); j ++){
            gridx[i][j] = grid[i][j];
        }
    }
}

void rotatex(int n){
    copyv();
    
    for (int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
            grid[j][n-i-1] = gridx[i][j];
        }
    }
}

bool isDone(int n){
    vector<ll> row;
    vector<ll> col;
    
    for (int i = 0; i < n; i ++){
        row.emplace_back(grid[0][i]);
    }
    
    for (int i = 0; i < n; i ++){
        col.emplace_back(grid[i][0]);
    }
    
    vector<ll> sr = row;
    sort(sr.begin(), sr.end());
    vector<ll> sc = col;
    sort(col.begin(), col.end());
    
    if (sr == row && sc == col){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    int x;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cin >> x;
            grid[i][j] = x;
            gridx[i][j] = x;
        }
    }
    
    bool g = false;
    while (!g){
        if (isDone(n)){
            g = true;
        }else{
            rotatex(n);
        }
    }
    
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    
}