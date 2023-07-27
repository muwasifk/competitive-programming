#include <iostream>
#include <stack>

using namespace std;

int h[1000003];
int ret[1000003];

stack<int> ms;

int32_t main()
{
	int n; cin >> n;
	
	for (int i = 1; i < n + 1; i ++)
		cin >> h[i];
	
	for (int i = 1; i < n + 1; i ++){
		while (ms.empty() == false && h[ms.top()] <= h[i])
			ms.pop();
		
		ret[i] = ms.empty() == true ? i-1 : i - ms.top();
		ms.push(i);
	}
	
	for (int i = 1; i <= n; i ++)
		cout << ret[i] << " ";
}