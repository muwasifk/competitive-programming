#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    int n; cin >> n;
    
    int x;
    
    vector<int> d;
    vector<int> p;
    
    for (int j = 0; j < 2; j ++){
        for (int i = 0; i < n; i ++){
            cin >> x;
            if (j == 0){
                d.emplace_back(x);
            }else{
                p.emplace_back(x);
            }
        }
    }
    
    int c = 0;
    
    if (t == 2){
        sort(d.begin(), d.end(), greater<int>());
        sort(p.begin(), p.end());
        
        for (int i = 0; i < n; i ++){
            c += max(d[i], p[i]);
        }
    }else{
        sort(d.begin(), d.end());
        sort(p.begin(), p.end());
        
        for (int i = 0; i < n; i ++){
            c += max(d[i], p[i]);
        }
    }
    
    cout << c;
}