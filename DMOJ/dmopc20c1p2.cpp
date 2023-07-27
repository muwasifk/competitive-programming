#include <iostream>

using namespace std;

int arr[1000003];

int32_t main()
{
	int n, d; cin >> n >> d;
	
	for (int i = 1; i < n + 1; i ++) {
		int temp; cin >> temp;
		arr[i] += temp + arr[i-1];
	}
	
	int lptr = 1; int rptr = n;
	
	for (int i = 1; i < d + 1; i ++){
		int temp; cin >> temp;
		
		int sum1 = arr[lptr + temp - 1] - arr[lptr - 1];
		int sum2 = arr[rptr] - arr[lptr + temp - 1];
		
		if (sum1 >= sum2){
			cout << sum1 << '\n';
			lptr += temp;
		} else {
			cout << sum2 << '\n';
			rptr = lptr + temp - 1;
		}
	}
}