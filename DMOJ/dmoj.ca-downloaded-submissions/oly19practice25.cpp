#include <iostream>

using namespace std;

#define int long long

int grid[5003][5003];

int32_t main()
{
	int n, m, k; cin >> n >> m >> k;
	
	for (int i = 0; i < k; i ++){
		int x,y,X,Y; cin >> x >> y >> X >> Y; X++; Y++;
		
		grid[x][y] ++; grid[X][Y] ++;
		grid[x][Y] --; grid[X][y] --;
	}
	
	for (int i = 1; i < 5003; i ++){
		for (int j = 1; j < 5003; j ++){
			grid[i][j] += grid[i][j-1] + grid[i-1][j] - grid[i-1][j-1];
		}
	}
	
	for (int i = 1; i < 5003; i ++){
		for (int j = 1; j < 5003; j ++){
			grid[i][j] += grid[i][j-1] + grid[i-1][j] - grid[i-1][j-1];
		}
	}
	
	int q; cin >> q;
	for (int i = 0; i < q; i ++){
		int a, b, c, d; cin >> a >> b >> c >> d;
		cout << grid[c][d] + grid[a-1][b-1] - grid[a-1][d] - grid[c][b-1] << '\n';
	}
}