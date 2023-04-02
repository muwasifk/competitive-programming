#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

#define MAX 2e5 + 5

vector<int> freq(MAX);

int main(){
    int n, k; cin >> n >> k;
    
    int x;
    for (int i = 0; i < n; i ++){
        cin >> x;
        freq[x] ++;
    }
    
    sort(freq.begin(), freq.end(), greater<int>());
    int c = 0;
    for (int i = 2e5 + 4; i >= 0; i --){
        if (freq[i] > 0){
            if (i >= k){
                c += freq[i];
            }
        }
    }
    cout << c;
}