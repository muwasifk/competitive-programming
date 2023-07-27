#include <iostream>
#include <cstring>

using namespace std;

int ev [1001] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int s, e, d, ds, count;
    
    for (int _ = 0; _ < 10; _ ++){
        cin >> s >> e >> d;
        memset(ev, 0, sizeof(ev));
        for (int i = 0, x; i < e; i ++){
            cin >> x; ev[x] ++;
        }
        
        ds = 0; count = 0;
        
        for (int i = 1; i < d + 1; i ++){
            if (ds == s){
                count ++; ds = 0;
            }
            
            s += ev[i]; ds ++;
        }
        
        cout << count << endl;
    }
}