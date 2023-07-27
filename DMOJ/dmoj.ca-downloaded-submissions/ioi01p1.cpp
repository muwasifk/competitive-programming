/* Easier version of: https://dmoj.ca/problem/gfssoc1s4 */

#include <iostream>

using namespace std;

int s;

int bit[1027][1027];

void update(int start, int end, int delta)
{
	for (int x = start; x <= s; x += x & -x){
		for (int y = end; y <= s; y += y & -y) {
			bit[x][y] += delta;
		}
	}
}

int query(int start, int end)
{
	int sum = 0;
	for (int x = start; x > 0; x -= x & -x){
		for (int y = end; y > 0; y -= y &- y) {
			sum += bit[x][y];
		}
	}
	
	return sum;
}

int RQ(int x1, int y1, int x2, int y2)
{
	return query(x2,y2) + query(x1-1,y1-1) - query(x2,y1-1) - query(x1-1,y2);
}

int32_t main()
{
	int ins; cin >> ins >> s;
	
	while (true){
		cin >> ins;
		
		if (ins == 1) {
			int x, y, delta; cin >> x >> y >> delta;
			update(x+1, y+1, delta);
		} else if (ins == 2) {
			int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
			x1 ++; x2 ++; y1 ++; y2 ++;
			cout << RQ(x1, y1, x2, y2) << '\n';
		} else if (ins == 3) {
			return 0;
		}
	}
}