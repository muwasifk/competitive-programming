#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

struct batch{
    int start, end, points;
};

batch batch[(int)1e6+3];

vector<int> failedcases;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int b; cin >> b;
    
    int cases = 0;
    
    for (int i = 0; i < b; i ++) {cin >> batch[i].start >> batch[i].end >> batch[i].points; cases += batch[i].points;}
    
    int f; cin >> f;
    for (int i = 0, _; i < f; i ++){
        cin >> _;
        failedcases.emplace_back(_);
    }
    
    sort(failedcases.begin(), failedcases.end());
    
    for (int i = 0; i < b; i++){
        auto iter = lower_bound(failedcases.begin(), failedcases.end(), batch[i].start);
        if (iter != failedcases.end())
        if (*iter >= batch[i].start && *iter <= batch[i].end) cases -= batch[i].points;
    }
    
    cout << cases;
    
    return 0;
}