#include <iostream>
#include <queue>

using namespace std;

#define MAXN 1000000
#define ull unsigned long long

int s[MAXN] = {1};

int main(){
    int n, m; ull k; cin >> n >> m >> k;
    
    if (k < n) {cout << -1; return 0;}
    
    int last;
    queue<int> q;
    
    k -= n;
    q.push(1);
    s[0] = 1;
    last = 1;
    
    for (int i = 1; i < n; i ++){
        
        if (k > 0){
            if (k >= q.size()){
                
                
                if (q.size() < m){
                    k -= q.size();
                    last ++;
                    q.push(last);
                    s[i] = last;
                }else if (q.size() == m){
                    k -= q.size() - 1;
                    last = q.front(); q.pop();
                    q.push(last);
                    s[i] = last;
                }
            }else{
                while (q.size() != k + 1) {q.pop();}
                last = q.front();
                q.push(last);
                
                s[i] = last;
                k = 0;
            }
        }else{
            s[i] = last;
        }
        
    }
    
    if (k != 0) {cout << -1; return 0;}
    
    for (int i = 0; i < n; i ++){
        cout << s[i] << " ";
    }
    
    return 0;
}