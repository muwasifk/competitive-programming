#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;

#define MAXN 100001

vector<long long> arr;

int main() {
    int n; cin >> n;
    
    for (int i = 0, x; i < n; i++) {cin >> x; arr.push_back(x);}
    
  
    sort(arr.begin(), arr.end());
  
    long long int m = 0; long long int opt = 0; long long int total = n;
    
    for (int i = 0; i < n; i++) {
        if (m < arr[i]*total) {m = arr[i]*total;opt = arr[i];}
        total--;
    }
  
    cout << m << " " << opt;
}