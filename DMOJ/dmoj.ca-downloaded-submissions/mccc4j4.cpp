#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<vector<int>>> points;
vector<vector<int>> groups;

long int groupNum(int a){
    for (auto i = groups.begin(); i != groups.end(); i ++){
        if (find((*i).begin(), (*i).end(), a) != (*i).end()){
            auto it = find(groups.begin(), groups.end(), *i);
            if (it != groups.end()){
                long int x = it - groups.begin();
                return x;
            }
        }
    }
    return a;
}

int main(){
    
    int n, s;
    cin >> n >> s;
    
    int avc;
    for (int i = 0; i < n/s; i ++){
        groups.emplace_back();
        for (int j = 0; j < s; j ++){
            cin >> avc;
            groups[i].emplace_back(avc);
        }
    }
    
    for (int i = 0; i < n/s; i ++){
        points.emplace_back();
    }
    
    for (int i = 0; i < n/s; i ++){
        for (int j = 0; j < n+1; j ++){
            vector<int> x = {j,0};
            points[i].emplace_back(x);
        }
    }
    
    for (int i = 0; i < (s-1)*n/2; i ++){
        int a, b;
        char c;
        
        cin >> a >> b >> c;
        
        if (c == 'W'){
            points[groupNum(a)][a][1] += 3;
        }else if (c == 'L'){
            points[groupNum(b)][b][1] += 3;
        }else{
            points[groupNum(a)][a][1] += 1;
            points[groupNum(b)][b][1] += 1;
        }
    }
    
    int k; cin >> k;
    
    string rs = "";
    
    for (int i = 0; i < n/s; i ++){
        
        vector<vector<int>> aaa = points[i];
        vector<vector<int>> bbb;
        copy(aaa.begin(), aaa.end(), back_inserter(bbb));
        
        sort(aaa.begin(), aaa.end());
        sort(bbb.begin(), bbb.end());
        
        for (auto j = bbb.begin(); j != bbb.end(); j ++){
            auto jt = find(groups[i].begin(), groups[i].end(), (*j)[0]);
            if ( jt == groups[i].end()){
                aaa.erase(remove(aaa.begin(), aaa.end(), (*j)), aaa.end());
            }
        }
        
        if (rs == ""){
            rs = rs + to_string(aaa[k-1][0]);
        }else{
            rs = rs + " " + to_string(aaa[k-1][0]);
        }
        
    }
    
    cout << rs << "\n";
    return 0;
    
}