#include <iostream>
#include <vector> 

#include <map>



using namespace std;

#define ll long long 

map<ll, ll> db; 

int main(){

    ll int n, tx; cin >> n >> tx; 

    db[tx+1] = 0; 

    for (int i = 0; i < n; i ++){
        ll d, b; cin >> d >> b; 

        db[d] = b; 
    }

    ll t = 0, r = 0, l = 0; 

    for (auto d = db.begin(); d != db.end();    d ++ ) {
        t += d -> second; r -= d -> first - l; l = d->first; 
        r = max<ll>(0, r) + d -> second; 
    }

    cout << (t -r);

}