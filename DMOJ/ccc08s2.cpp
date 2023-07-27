#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int q = false;
	while (q == false) {
		int n; cin >> n;
		if (n == 0) break;
		int ret = 0;
		
		for (int i = 0; i <= n; i ++){
			ret += sqrt(n*n - i*i);
		}
		
		cout << ret*4 + 1 << '\n';
	}
}