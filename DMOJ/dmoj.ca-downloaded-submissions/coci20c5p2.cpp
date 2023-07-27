#include <iostream>
#include <stack>

using namespace std;

stack<int> ms;

int32_t main()
{
	int n; cin >> n;
	
	int ret = 0;
	
	for (int i = 0; i < n; i ++){
		int a; cin >> a;

		while (ms.empty() == false && ms.top() > a)
			ms.pop();
		
		if (ms.empty() == false && ms.top() == a)
			continue;
		
		if (a > 0){
			ms.push(a); ret ++;
		}
	}
	
	cout << ret;
}