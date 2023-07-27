#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, int> freq;
vector<int> a;
int b[500001];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n, m; cin >> n >> m;
    for (int i = 0, x; i < n; i ++){
        cin >> x;
        freq[x] ++;
        a.emplace_back(x);
    }
    
    sort(a.begin(), a.end());
    
    b[0] = a[0]; freq[a[0]] --;
    int count = 0;
    bool flag = false;
    while (true){
        flag = false;
        for (int i = count; i < n; i ++){
            if (a[i] + b[count] >= m){
                if (freq[a[i]] != 0){
                    count ++; b[count] = a[i]; freq[a[i]] --; flag = true; break;
                }
            }
        }
        if (flag == false){
            break;
        }
        if (count == n - 1) break;
    }
    if (flag == false) cout << -1;
    else{
        for (int i = 0; i < n; i ++){
            cout << b[i] << " ";
        }
    }
    
}