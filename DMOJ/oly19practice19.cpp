#include <bits/stdc++.h>

using namespace std;

int seen[1000001];

int main()
{
    int n,k; cin >> n >> k; 
    memset(seen, -1, sizeof seen);
    int run=0;
    int ret = 0; seen[0]=0;
    for (int i = 1; i<=n; i++){
        int temp; cin >> temp;
        
        run += temp; run %= k;
        
        if (seen[run]!=-1)
        ret=max(ret, i-seen[run]);
        else
        seen[run]=i;
    }
    
    cout<<ret;
}