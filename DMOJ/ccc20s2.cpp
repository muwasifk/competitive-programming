#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_set>
#include <set>

using namespace std;

struct coord{
    int x;
    int y;
    
    bool operator == (const coord &coord) const{
        return x == coord.x && y == coord.y;
    }
};

struct hash_fn{
    size_t operator() (const coord &coord) const{
        return coord.x + 1000 * coord.y;
    }
};

queue<coord> q;
unordered_set<coord, hash_fn> visited;
set<int> factor;
bool vis[1001][1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin >> m;
    cin >> n;
    
    int v[1001][1001];
    
    for (int s = 0; s < 1001; s ++){
        for (int d = 0; d < 1001; d++){
            vis[s][d] = false;
        }
    }
    
    /*vector<vector<int>> v(m, vector<int> (n));*/
     
    int x;
    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++){
            cin >> x;
            v[i][j] = x;
        }
    }
    
    q.push({1,1});
    vis[1][1] = true;
    
    coord current;
    coord l;
    
    int a;
    int b;
    
    while (q.size() != 0){
        current = q.front();
        q.pop();
        
        if (current.x == m && current.y == n){
            cout << "yes";
            return 0;
        }else{
            a = v[current.x][current.y];
            if (factor.find(a) == factor.end()){
                factor.insert(a);
                for (int k = 1; k <= floor(sqrt(a)); k ++){
                    if (a % k == 0){
                        b = a/k;
                       
                        if (k <= m && b <= n){
                            l = {k, b};
                            if (vis[k][b] == false){
                                q.push(l);
                                vis[k][b] = true;
                            }
                        }
                        
                        if (b <= m && k <= n){
                            l = {b, k};
                            if (vis[b][k] == false){
                                q.push(l);
                                vis[b][k] = true;
                            }
                        }
                        
                    }
                }
            }
        }
    }
    
    cout << "no";
    return 0;
    
}