#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> vals;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    int x;
    for (int i = 0; i < n; i ++){
        cin >> x;
        vals.insert(x);
    }
    
    cout << vals.size();
}