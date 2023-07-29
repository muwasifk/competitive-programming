#include <iostream>

using namespace std;

#define int long long

int gcd(int a, int b)
{
	if (b==0)
		return a;
	return gcd(b,a%b);
}

int32_t main()
{
	int h, v; cin >> h >> v;
	
	int ret = 0; int xx, yy;
	
	int locx, locy;
	
	for (int x = 1; x < v; x++) {
		for (int y = 0; y < h; y++) {
			xx = y/gcd(x,y);
			yy = x/gcd(x,y);
			
			locx = xx + x;
			locy = yy + y;
			
			while (locx <= v && locy <= h){
				ret += (v-locx)*(h-locy);
				locx += xx; locy += yy;
			}
		}
	}
	
	cout << ret << '\n'; 
	
	return 0;
}
