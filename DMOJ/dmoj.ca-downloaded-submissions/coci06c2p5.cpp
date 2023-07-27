#include <iostream>

using namespace std;

int pfx[403][403];

int main()
{
	cin.sync_with_stdio(0); cin.tie(0);
	
	int r, c; cin >> r >> c;
	
	// pfx to see how many blocked squares to left
	
	for (int i = 1; i < r+1; ++i){
		for (int j = 1; j < c+1; ++j){
			char tmp; cin >> tmp;
			if (tmp == 'X')
				pfx[i][j] = pfx[i][j-1] + 1;
			else
				pfx[i][j] = pfx[i][j-1];
		}
	}
	
	// check all column combinations
	int q = 0;
	for (int i = 1; i <= c; ++i) {
		for (int j = i; j <= c; j ++) {
			int count = 0;
			for (int k = 1; k <= r; ++k) {
				if (pfx[k][j] - pfx[k][i-1] == 0)
					++count;
				else {
					if (count != 0)
						q = max(q, 2*(j-i+1) + 2*count);
					count = 0;
				}
			}
			if (count != 0)
				q = max(q, 2*(j-i+1) + 2*count);
		}
	}
	
	cout << q - 1 << '\n'; // Mirko included
		
}