#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

const int MM = 1e5 + 5;

bool p[MM];
int psa[MM];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    memset(p, 1, sizeof(p));
    
    for (int i = 2; pow(i, 2) < MM; i ++){
        if (p[i]){
            for (int j = i * 2; j < MM; j += i){
                if (j%i == 0){
                    p[j] = 0;
                }
            }
        }
    }
    
    psa[0] = 0; psa[1] = 0; psa[2] = 2;
    
    for (int i = 3; i < MM; i ++){
        if (p[i]){
            psa[i] = i + psa[i-1];
        }
        else{
            psa[i] = psa[i-1];
        }
    }
    
    int q; cin >> q;
    for (int _ = 0, a, b; _ < q; _ ++){
        cin >> a >> b;
        cout << psa[b] - psa[a-1] << endl;
    }
    
}