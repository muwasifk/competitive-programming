#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> values;
vector<int> svalues;
int friends[(int)1e5+3] = {0};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, k; cin >> n >> k;
    
    for (int x, i = 0; i < n; i ++){
        cin >> x; values.emplace_back(x);
    }
    
    for (int i = 0, a, b; i < k; i ++){
        cin >> a >> b;
        if (values[a-1] < values[b-1]){
            friends[b-1] ++;
        }else if (values[a-1] > values[b-1]){
            friends[a-1] ++;
        }
    }
    
    svalues = values;
    sort(svalues.begin(), svalues.end());
    
    for (int i = 0; i < n; i ++){
        long long int bsearch = lower_bound(svalues.begin(), svalues.end(), values[i]) - svalues.begin();
        cout << bsearch - friends[i] << ' ';
    }
    
}