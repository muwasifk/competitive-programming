#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <set>
#include <string>

using namespace std;

int main(){
    iostream::sync_with_stdio(NULL); cout.tie(NULL); cin.tie(NULL);
    
    int n, q; cin >> n >> q;
    
    vector<set<string>> s(n + 1);
    
    string name;
    for (int i = 0, k, m; i < q; i ++){
        cin >> k >> m >> name;
        if (k == 1){
            if (s[m].find(name) == s[m].end()) cout << 0 << endl;
            else cout << 1 << endl;
        }else{
            s[m].insert(name);
        }
    }
}