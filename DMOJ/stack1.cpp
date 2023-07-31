#include <iostream>
#include <stack>
#include <deque>

using namespace std;

deque<string> dq;

int32_t main()
{
	int t, m; cin >> t >> m;
	
	while (t--){
		string p, i; cin >> p >> i;
		
		if (i == "in"){
			dq.push_back(p);
		} else {
			if (p == dq.back()) dq.pop_back();
			else {
				if (m > 0 && p == dq.front()){
					dq.pop_front();
					m--;
				}
			}
		}
	}
	
	for (auto x : dq) {
		cout << x << '\n';
	}
	
	return 0;
}
