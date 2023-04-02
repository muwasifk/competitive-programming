#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    unordered_set<int> t;
    
    cin >> n;
    for (int i = 0; i < n; i ++){
        int x;
        cin >> x;
        t.insert(x);
    }
    
    sort(t.begin(), t.end());
    
    for (auto it = t.begin(); it!=t.end(); it++){
        cout << *it << endl;
    }
}