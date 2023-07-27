// Monotonic Stack

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int32_t main()
{
	int t; cin >> t;
	
	while (t--){
		stack<int> ms;
		
		string n; int k; cin >> n >> k; string ret;
		
		for (int i = 0; i < n.length(); i ++){
			while (ms.empty() == false && n[ms.top()] > n[i] && k > 0){
				ret += n[ms.top()]; ms.pop(); k--;
			}
			ms.push(i);
		}
		
		while (ms.empty() == false && k > 0){
			ret += n[ms.top()]; ms.pop(); k--;
		}
		
		vector<int> o;
		while (ms.empty() == false){
			o.emplace_back(ms.top());
			ms.pop();
		}
		reverse(o.begin(), o.end());
		for (auto i : o) cout << n[i];
		sort(ret.begin(), ret.end());
		for (auto i : ret) cout << i;
		
		cout << '\n';
	}
}