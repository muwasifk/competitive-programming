#include <iostream>
#include <map>

using namespace std;


map<int, int> dpfx;
int L, N, S;

int main()
{
	cin >> N >> L >> S;
	for (int t = 0; t < N; t ++) {
		int a, b, s; cin >> a >> b >> s;
		dpfx[a] += s;
		dpfx[b + 1] -= s;
	}
	int rsum = 0, p = 0, count = 0;
	for (auto i = dpfx.begin(); i != dpfx.end(); i++) {
		if (rsum < S) {
			count += i -> first - p;
		}
		p = i -> first;
		rsum += i -> second;
	}
	
	// houses before first pivot and after last pivot are untouched, def. safe
	
	if (dpfx.end()->second < S) {
		count += L - p;
	}
	
	cout << count;
}