#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char s[(int)1e6 + 3];
bool k[(int)1e6 + 3];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n; cin >> n; for (int i = 0; i < n; i ++) cin >> s[i];
    
    for (int i = 0; i < n; i ++){
        if (s[i] == '1'){
            k[i] ^= 1; k[i+1] ^= 1;
        }
    }
    
    int sum = 0;
    for (int i = 1; i <= n; i ++){
        sum += k[i];
    }
    cout << sum;
}