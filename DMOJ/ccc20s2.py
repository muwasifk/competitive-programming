#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_set>

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
        return coord.x + 200 * coord.y;
    }
};

queue<coord> q;
unordered_set<coord, hash_fn> visited;

int main(){
    int m,n;
    cin >> m;
    cin >> n;
    
    int v[201][201];
    
    /*vector<vector<int>> v(m, vector<int> (n));*/
     
    int x;
    for (int i = 1; i <= m; i ++){
        for (int j = 1; j <= n; j ++){
            cin >> x;
            v[i][j] = x;
        }
    }
    
    q.push({1,1});
    visited.insert({1,1});
    
    coord current;
    coord l;
    
    int a;
    
    while (q.size() != 0){
        current = q.front();
        q.pop();
        
        if (current.x == m && current.y == n){
            cout << "yes";
            return 0;
        }else{
            a = v[current.x][current.y];
            
                for (int k = 1; k <= floor(sqrt(a)); k ++){
                    if (a % k == 0){
                        if (a / k != k){
                            if (k <= m && a/k <= n){
                                l = {k, a / k};
                                if (find(visited.begin(), visited.end(), l) == visited.end()){
                                    q.push(l);
                                    visited.insert(l);
                                }
                            }
                            
                            if (a/k <= m && k <= n){
                                l = {a / k, k};
                                if (find(visited.begin(), visited.end(), l) == visited.end()){
                                    q.push(l);
                                    visited.insert(l);
                                }
                            }
                        }else{
                            l = {k, a / k};
                            if (find(visited.begin(), visited.end(), l) == visited.end()){
                                q.push(l);
                                visited.insert(l);
                            }
                        }
                    }
                }
        }
    }
    
    cout << "no";
    return 0;
    
}