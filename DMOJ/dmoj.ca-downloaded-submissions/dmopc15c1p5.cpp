#include <iostream>

using namespace std;

int grid[300][300];
int psa[300][300];

int w, h, n;

int32_t main()
{
	cin >> w >> h >> n;
	
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j ++){
			cin >> grid[j][i];
		}
	}
	
	for (int i = 1; i <= w; i ++){
		for (int j = 1; j <= h; j ++){
			psa[i][j] = grid[i][j] + psa[i-1][j] + psa[i][j-1] - psa[i-1][j-1];
		}
	}
	
	int ret = -1;
	
	for (int i = 1; i <= min(w,n); i++){
		for (int j = 1; j <= w+1-i; j ++){
			for (int k = 1; k <=h+1-min(h,n/i); k++){
				int i2 = j+i-1; int j2 = k+min(h,n/i)-1;
				
				int q = psa[i2][j2] + psa[j-1][k-1] - psa[j-1][j2] - psa[i2][k-1];
				ret = max(ret, q);
			}
		}
	}
	
	cout << ret;
	
}