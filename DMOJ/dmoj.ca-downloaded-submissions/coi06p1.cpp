#include <iostream>
#include <stack>

using namespace std;

#define int long long 

stack<pair<int,int>> ms;

int32_t main()
{
	int n; cin >> n;
	int ret = 0;
	while (n --){
		int h; cin >> h;
		
		while (ms.empty() == false && ms.top().first < h) {
			ret += ms.top().second;
			ms.pop();
		}
		
		if (ms.empty() == true)
			ms.push(pair<int,int>(h, 1));
		else {
			if (ms.top().first == h){
				ret += ms.top().second;
				
				if (ms.size() > 1) ret ++; 
				
				ms.top().second ++;
			} else {
				ret ++;
				ms.push(pair<int,int> (h,1));
			}
		}
	}
	
	cout << ret << '\n';
}