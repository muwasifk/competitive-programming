#include <iostream>
#include <queue>
#include <vector>
#include <climits>
#include <cstring>

using namespace std;

#define f first
#define s second

struct Fenwick{
    
    vector<int> bit;
    vector<int> arr;
    
    Fenwick(int N){bit = vector<int>(N,0); arr = vector<int> (N, 0);}
    
    void set(int k, int x){
        add(k, x - arr[k]);
    }
    
    int sum(int k){
        int s = 0;
        while (k >= 1){
            s += bit[k];
            k -= k&-k;
        }
        return s;
    }
    
    void add (int k, int x){
        arr[k] += x;
        while (k <= bit.size()){
            bit[k] += x;
            k += k&-k;
        }
    }
    
};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m;
    
    Fenwick fenwick(n);
    
    for (int i = 0; i < n; i ++){
        int x; cin >> x;
        fenwick.add(i, x);
    }
    
    while (m--){
        char cmd; cin >> cmd;
        
        if (cmd == 'C'){
            int x, y; cin >> x >>y ;
            fenwick.set(x, y);
        }else if (cmd == 'S'){
            int l, r; cin >> l >> r;
            
            cout << fenwick.sum(r) - fenwick.sum(r) << endl;
        }else if (cmd == 'Q'){
            int v; cin >> v;
            
            
        }
    }
}