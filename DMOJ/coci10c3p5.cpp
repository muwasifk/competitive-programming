#include <iostream>
#include <stack>

using namespace std;

#define int long long 

#define f first
#define s second

int arr[300003];

stack<pair<int,int>> ms;

int l_max[300003], r_max[300003], l_min[300003], r_min[300003];

void clr()
{
	while (ms.empty() == false)
		ms.pop();
}

int32_t main()
{
	int n; cin >> n;
	
	for (int i = 1; i < n + 1; i ++)
		cin >> arr[i];
	
	for (int i = 1; i < n + 1; i ++){
		while (ms.empty() == false && arr[i] > ms.top().f)
			ms.pop();
		
		if (ms.empty() == false)
			l_max[i] = ms.top().s;
		else
			l_max[i] = 0;
		
		ms.push(pair<int,int>(arr[i], i));
	}
	
	clr();
	
	for (int i = n; i > 0; i --){
		while (ms.empty() == false && arr[i] >= ms.top().f)
			ms.pop();
		
		if (ms.empty() == false)
			r_max[i] = ms.top().s;
		else
			r_max[i] = n+1;
		
		ms.push(pair<int,int>(arr[i], i));
	}
	
	clr();
	
	
	for (int i = 1; i < n + 1; i ++){
		while (ms.empty() == false && arr[i] < ms.top().f)
			ms.pop();
		
		if (ms.empty() == false)
			l_min[i] = ms.top().s;
		else
			l_min[i] = 0;
		
		ms.push(pair<int,int>(arr[i], i));
	}
	
	clr();
	
	for (int i = n; i > 0; i --){
		while (ms.empty() == false && arr[i] <= ms.top().f)
			ms.pop();
		
		if (ms.empty() == false)
			r_min[i] = ms.top().s;
		else
			r_min[i] = n+1;
		
		ms.push(pair<int,int>(arr[i], i));
	}
	
	int ret_max = 0;
	int ret_min = 0;
	
	for (int i = 1; i < n + 1; i ++){
		ret_max += (arr[i] * (i - l_max[i]) * (r_max[i] - i));
	}
	
	for (int i = 1; i < n + 1; i ++){
		ret_min += (arr[i] * (i - l_min[i]) * (r_min[i] - i));
	}
	
	cout << ret_max - ret_min << '\n';
		
}