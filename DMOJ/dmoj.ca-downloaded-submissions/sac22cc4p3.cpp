#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n; vector<int> nums; int x; for (int i = 0; i < n; i ++) {cin >> x; nums.push_back(x);} sort(nums.begin(), nums.end()); cout << nums[n/2]; 
}