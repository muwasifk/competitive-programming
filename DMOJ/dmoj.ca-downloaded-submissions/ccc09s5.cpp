#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int diff[30005][1005];

int main()
{
	int m, n; cin >> m >> n; int k; cin >> k;
	
	for (int _ = 0; _ < k; _ ++){
		int x, y, r, b; cin >> x >> y >> r >> b; //https://dmoj.ca/problem/ccc08s2 <- useful
		for (int i = max(1, x - r); i <= min(n, x+r); i ++){
			int rg = sqrt(r*r - (x-i)*(x-i));
			int lbound = max(1, y - rg);
			int rbound = min(30004, y + 1 + rg);
			
			diff[lbound][i] += b; diff[rbound][i] -= b;
		}
	}
	
	int ret = 0;
	
	for (int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			diff[j][i] += diff[j-1][i]; ret = max(ret, diff[j][i]);
		}
	}
	
	int freq = 0;
	
	for (int i = 1; i <= n; i ++) for (int j = 1; j <= m; j++) if (diff[j][i] == ret) freq ++;
	
	cout << ret << '\n' << freq << '\n';
}