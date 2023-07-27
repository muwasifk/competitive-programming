#include <iostream>

using namespace std;

const int MAXV = 655; const int MAXN = 5e5+5;

int pfx[MAXV][MAXV], a[MAXN], b[MAXN];

int query(int i1, int  j1, int i2, int j2)
{
	return pfx[i2][j2] + pfx[i1][j1] - pfx[i2][j1] - pfx[i1][j2] + 1;
}

int32_t main()
{
	int n; cin >> n;
	
	for (int i = 1; i <= n; i++){
		cin >> a[i] >> b[i];
		a[i] ++; b[i] ++;
		pfx[a[i]][b[i]] ++;
	}
	
	for (int i = 1; i <= 651; i++) for (int j = 1; j <= 651; j++)
		pfx[i][j] += pfx[i-1][j] + pfx[i][j-1] - pfx[i-1][j-1];
	
	
	
	for (int i = 1; i <= n; i ++){
		int sup, inf;
		sup = query(a[i], b[i], 651, 651);
		inf = pfx[a[i] - 1][b[i] - 1];
		
		if (a[i] == 651)
			inf += pfx[1][b[i]] - pfx[1][b[i] - 1];
		if (b[i] == 651)
			inf += pfx[a[i]][1] - pfx[a[i]-1][1];
		
		cout << sup << ' ' << n - inf << '\n';
	}
	
	
}