#include <iostream>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    
    for (int i = 0; i < k; i ++){
        int s, t, r; cin >> s >> t >> r;
        
        int solved = 0;
        int time = 0;
        int x = 0;
        while (solved < n){
            solved += s; time++; x ++;
            if (solved >= n) break;
            if ((x) % t == 0){
                time += r;
            }
        }
        cout << time << endl;
    }
}