#include <iostream>

using namespace std;

char grid[51][51];

char flip(char c)
{
	if (c == 'S') return 'R';
	if (c == 'R') return 'P';
	if (c == 'P') return 'S';
	
	return 'N';
}

int32_t main()
{
	int r; cin >> r;
	
	for (int i = 0; i < r; i ++){
		cin >> grid[0][i];
	}

	int n; cin >> n;
	
	for (int i = 1; i <= n; i ++){
		for (int j = 0; j < r; j ++){
			cin >> grid[i][j];
		}
	}
	
	int pts = 0;

	for (int i = 0; i < r; i ++){
		for (int j = 1; j <= n; j ++){
			if (grid[0][i] == grid[j][i]) pts ++;
			else if (flip(grid[0][i]) != grid[j][i])
				pts += 2;
		}
	}

	cout << pts << '\n';
	pts = 0;
	for (int i = 0; i < r; i  ++){
		int ptsx = 0 ;
		for (int j = 1; j <= n; j ++){
			if ('R' == grid[j][i]) ptsx ++;
			else if (flip('R') != grid[j][i])
				ptsx += 2;
		}
		
		int ptsy = 0;
		for (int j = 1; j <= n; j ++){
			if ('P' == grid[j][i]) ptsy ++;
			else if (flip('P') != grid[j][i])
				ptsy += 2;
		}
		
		int ptsz = 0;
		for (int j = 1; j <= n; j ++){
			if ('S' == grid[j][i]) ptsz ++;
			else if (flip('S') != grid[j][i])
				ptsz += 2;
		}
		
		pts += max(max(ptsx, ptsy), ptsz);
		
	}
	
	cout << pts;
	
	return 0;
}