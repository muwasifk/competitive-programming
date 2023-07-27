#include <iostream>

using namespace std;

const int MAXN = 1e5+2;
const int MAXM = 5e5+2;

typedef long long ll;

ll arr[MAXN];
ll bit[MAXN];

int freq[MAXN];
int freqbit[MAXN];

ll n, m;

ll query(ll idx)
{
	ll sum = 0;
	while (idx > 0) {
		sum += bit[idx];
		idx -= (idx & -idx);
	}
	
	return sum;
}

ll queryfreq(ll idx)
{
	ll sum = 0;
	while (idx > 0) {
		sum += freqbit[idx];
		idx -= (idx & -idx);
	}
	
	return sum;
}

void initTree()
{
	for (int i = 1; i <= n; ++i) {
		bit[i] += arr[i-1];
		ll m = i + (i & -i);
		if (m < MAXN) bit[m] += bit[i];
	}
	
	for (int i = 1; i < MAXN; ++i) {
		freqbit[i] += freq[i];
		ll m = i + (i & -i);
		if (m < MAXN) freqbit[m] += freqbit[i];
	}
}

void update(ll idx, ll delta)
{
	arr[idx - 1] += delta;
	while (idx <= n) {
		bit[idx] += delta;
		idx += (idx & -idx);
	}
}

void updatefreq(ll idx, ll delta)
{
	while (idx < MAXN) {
		freqbit[idx] += delta;
		idx += (idx & -idx);
	}
}

int main()
{
	cin >> n >> m;
	
	for (int i = 0; i < n; ++i) {
		int temp; cin >> temp;
		
		arr[i] = temp;
		freq[temp] ++;
	}
	
	initTree();
	
	while (m--) {
		char ins; ll a, b; cin >> ins;
		if (ins == 'C') {
			cin >> a >> b;
			updatefreq(arr[a-1], -1);
			updatefreq(b, 1);

			update(a, b - arr[a-1]);
			
		} else if (ins == 'S') {
			cin >> a >> b;
			cout << query(b) - query(a-1) << '\n';
		} else if (ins == 'Q') {
			cin >> a;
			cout << queryfreq(a) << '\n';
		}
	}
	
	return 0;
}
