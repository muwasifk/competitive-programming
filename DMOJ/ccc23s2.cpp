#include <iostream>
#include <climits>

using namespace std;

int arr[5003];
int ret[5003];

int32_t main()
{
	int n; cin >> n;
	
	for (int i = 0; i < n; i ++) cin >> arr[i];
	
	for (int i = 0; i < 5003; i ++) ret[i] = INT_MAX;
	
	for (int i = 0; i < n; i++){
		int run = 0;
		ret[1] = min(ret[1], run);
		
		for (int j = 1; i - j >= 0 && i  +j < n; j ++) {
			run += abs(arr[i-j]-arr[j+i]);
			ret[2*j+1] = min(run, ret[2*j+1]);
		}
	}
	
	for (int i = 0; i < n; i ++){
		int run = 0;
		
		for (int j = 1; i-j+1 >= 0&& i+j<n; j++){
			run += abs(arr[i-j+1] -arr[i+j]);
			ret[2*j] = min(run, ret[2*j]);
		}
	}
	
	for (int i = 1; i < n; i ++) cout << ret[i] << ' ';
	cout << ret[n] << '\n';
	
	return 0;
}
