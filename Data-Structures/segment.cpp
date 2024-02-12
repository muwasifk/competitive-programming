#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> seg(16);
vector<int> arr = {5, 8, 6, 3, 2, 7, 2, 6};

void construct()
{
	for (int i = arr.size(); i < 2 * arr.size(); i++) {
		seg[i] = arr[i-arr.size()];
	}
	
	for (int i = arr.size() - 1; i > 0; i --) {
		seg[i] = seg[2*i] + seg[2*i+1];
	}
}

int query(int a, int b)
{
	a += arr.size(); b += arr.size();
	int s = 0;
	
	while (a <= b) {
		if (a%2 == 1) s += seg[a++];
		if (b%2 == 0) s += seg[b--];
		a/=2; b/= 2;
	}
	
	return s;
}

void update(int pos, int delta)
{
	pos += arr.size();
	seg[pos] += delta;
	
	for (pos/=2; pos>= 1; pos/=2){
		seg[pos] = seg[2*pos] + seg[2*pos+1];
	}
}

int32_t main()
{
	cin.sync_with_stdio(0); cin.tie(0);
	
	construct();
	
	update(3, 2);
	cout << query(3, 6);
}
