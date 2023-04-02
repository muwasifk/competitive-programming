#include <iostream>
#include <algorithm>

using namespace std;

#define ll long long
#define MAXWEIGHT 1000000001
#define MAXN 100

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; ll capacity;
    
    cin >> n >> capacity;
    
    ll dp[MAXWEIGHT] = {0};
    
    ll weights[MAXN] = {0};
    int values[MAXN] = {0};
    
    ll wi; int vi;
    
    for (int i = 0; i < n; i ++){
        cin >> wi >> vi;
        weights[i] = wi;
        values[i] = vi;
    }
    
    for (int i = 0; i < n; i ++){
        for (ll j = capacity; j >= 0 ; j--){
            if (weights[i] <= j){
                dp[j] = max(dp[j], dp[j - weights[i]] + values[i]);
            }
        }
    }
    
    cout << dp[capacity];
    return 0;
    
}