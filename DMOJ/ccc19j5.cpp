#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

struct step{
    int starting_index;
    int rule_number;
    int depth;
    string ac;
};

unordered_map<string, string> rules;
vector<string> rule_keys;

queue<vector<step>> q;

bool isNew(vector<step> v, string s){
    for (auto i = v.begin(); i != v.end(); i ++){
        if ((*i).ac == s){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string k1, k2;
    for (int i = 0; i < 3; i ++){
        cin >> k1 >> k2;
        rules[k1] = k2;
        rule_keys.emplace_back(k1);
    }
    
    int intendedLen;
    string begin, end;
    
    cin >> intendedLen >> begin >> end;
    
    q.push({{0, 0, 0, begin}});

    vector<step> path;
    vector<step> val;
    while (q.size() != 0){
        path = q.front();
        q.pop();
        val = path;
        
        
        for (int i = 0 ; i < 3; i ++){
            long int y = path.back().ac.find(rule_keys[i]);
            while (y != -1){
                val.back().ac.replace(y, rule_keys[i].length(), rules[rule_keys[i]]);
                if (isNew(path, val.back().ac) == true){
                    val.back().depth = path.back().depth + 1;
                    path.push_back({static_cast<int>(y+1), i+1, val.back().depth, val.back().ac});
                    q.push(path);
                    path.pop_back();
                }
                val = path;
                y = path.back().ac.find(rule_keys[i], y+1);
                if (path.back().ac == end && path.back().depth == intendedLen){
                    for (auto i = path.begin()+1; i != path.end(); i++){
                        cout << (*i).rule_number << " " << (*i).starting_index << " " << (*i).ac << endl;
                    }
                    return 0;
                }
            }
        }
    
    }
}