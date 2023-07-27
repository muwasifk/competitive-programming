#include <iostream>

using namespace std;

#define int long long

int ret[1000003];

int32_t main()
{
	int k; cin >> k; if (k == 0) {cout << "1" << '\n' << "1" << '\n'; return 0;}
	
	int r = 1000000;
	bool flag = false;
	int l = 0;
	for (; l <= 1000000; l ++) {
		while (l * (l-1) / 2 + r * (r+1) / 2 > k && r > 0)
			r--;
		
		if (l * (l-1) / 2 + r * (r+1) / 2 == k && l + r <= 1000000){
			flag = true; break;
		}
	}
	
	if (flag == false){
		cout << "-1" << '\n';
		return 0;
	} else {
		cout << l + r << '\n';
		ret[r] = 1;
		
		for (int i = 0; i < l + r - 1; i ++){
			cout << ret[i] << " ";
		}
		
		cout << ret[l + r - 1] << '\n';
	}
}