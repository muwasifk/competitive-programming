#include <iostream>

using namespace std;

short grid[10003][10003];

int main()
{
	int n, m; cin >> n >> m;

	for (int i = 0; i < m; i ++){
		int x,y,w,h; cin >> x >> y >> w >> h;

		grid[x+1][y+1]++; grid[x+1+w][y+1+h]++; grid[x+1+w][y+1]--; grid[x+1][y+1+h]--;
	}
	int ret = 0;
	for (int i = 1; i <= n; i ++){
		for (int j = 1; j <= n; j ++){
			grid[i][j] += grid[i-1][j] + grid[i][j-1] - grid[i-1][j-1];
			if (grid[i][j]%2!=0) ret++;
		}
	}

	cout << ret;
}