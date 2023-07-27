#include <iostream>

using namespace std;

const int MAX = 255;

int n, q;

#define int long long 

int bit[MAX][MAX][MAX];

void update(int x, int y, int z, int delta)
{
	int y_original = y, z_original = z;
	while (x <= n) {
		y = y_original;
		while (y <= n){
			z = z_original;
			while (z <= n){
				bit[x][y][z] += delta;
				z += (z & -z);
			}
			y += (y & -y);
		}
		x += (x & -x);
	}
}

int query(int x, int y, int z)
{
	int y_original = y, z_original = z;
	int sum = 0;
	while (x > 0) {
		y = y_original;
		while (y > 0) {
			z = z_original;
			while (z > 0) {
				sum += bit[x][y][z];
				z -= (z & -z);
			}
			y -= (y & -y);
		}
		x -= (x & -x);
	}
	
	return sum;
}

int RQ(int x1, int y1, int z1, int x2, int y2, int z2)
{
	return query(x2,y2,z2) - query(x1,y1,z1) + query(x1,y1,z2) + query(x1,y2,z1) + query(x2,y1,z1) - query(x1,y2,z2) - query(x2,y1,z2) - query(x2,y2,z1);
}

int32_t main()
{
	cin >> n >> q;
	
	int ret = 0;
	while (q--) {
		char ins; cin >> ins;
		
		if (ins == 'C') {
			int x, y, z, f;
			cin >> x >> y >> z >> f;
			
			int delta = f - RQ(x-1,y-1,z-1,x,y,z);
			
			update(x, y, z, delta);
		} else if (ins == 'S'){
			int x1, y1, z1, x2, y2, z2; cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
			ret += RQ(x1-1, y1-1, z1-1, x2, y2, z2);
		}
	}
	
	cout << ret << '\n';
	return 0;
}