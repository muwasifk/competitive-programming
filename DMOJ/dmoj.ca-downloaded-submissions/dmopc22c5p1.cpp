#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long n; cin >> n;
	long long maxv = 0;
	for (long long i = 0; i <= n/2; i ++) {
		maxv = max(maxv, (n-2*i) * (n-2*i-1) / 2 * i);
	}
	
	cout << maxv;
}