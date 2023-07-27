#include <iostream>
#include <algorithm>

using namespace std;

#define MAXVW 5000
#define INFTY 1061109567
#define H 55001

int values[MAXVW] = {INFTY};
int weights[MAXVW] = {INFTY};

int p[H];
int c[H];

int main(){
    
    fill_n (p, H, INFTY);
    
    int maxn = 0;
    
    int n; int m; cin >> n >> m; if (n > maxn) maxn = n;
    
    for (int i = 1; i <= n; i ++) cin >> values[i] >> weights[i];
    
    int cmin = INFTY;
    
    for (int i = 1; i <= n; i ++){
        for (int j = 1; j <= 55000; j ++){
            c[j] = min(p[j], c[j-values[i]] + weights[i]);
            if (j >= m){
                if (c[j] < cmin) cmin = c[j];
            }
        }
        copy(begin(c), end(c), begin(p));
    }
    
    cout << cmin;
    return 0;
}