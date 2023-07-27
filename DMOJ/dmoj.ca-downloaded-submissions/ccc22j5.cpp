#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    int n, t; cin >> n >> t;

    vector<pair<int,int>> trees = {{0,0}, {n + 1, n + 1}};
    
    int x, y;
    for (int i = 0; i < t; i ++){cin >> x >> y; trees.push_back({x, y});}
    
    int l, r, ans = 0;
    
    for (int i = 0; i < t + 2; i ++){
        for (int j = i + 1; j < t + 2; j ++){
            l = min(trees[i].first, trees[j].first); r = max(trees[i].first, trees[j].first);
            
            vector<int> treesx = {0, n + 1};
            
            for(int k = 0; k < t + 2; k++) if(trees[k].first > l && trees[k].first < r) treesx.push_back(trees[k].second);
            
            sort(treesx.begin(), treesx.end());
            
            for(int k = 1; k < treesx.size(); k++) ans = max(ans, min(r - l - 1, treesx[k] - treesx[k-1] - 1));
            
        }
    }
    cout << ans;
}