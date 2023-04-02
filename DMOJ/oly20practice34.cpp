#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll unsigned long long

#define MAXN 1000001
#define MOD 1000000007
ll cur[MAXN] = {1};
ll prev1[MAXN] = {0};


int main(){
    int n; cin >> n;

    for (int i = 0; i <= (int) log2(n); i ++){
        
        for (int j = 1; j <= n; j ++){

            if (j < pow(2,i)) cur[j] = prev1[j];
            else cur[j] = (prev1[j] + cur[j-(int)pow(2,i)])%MOD;

        }
        copy(begin(cur), end(cur), begin(prev1));
    }
    
    cout << cur[n];
    
    return 0;
}