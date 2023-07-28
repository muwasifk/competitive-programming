#include <iostream> 
using namespace std; 

// a[] is original array, bit[] is fenwick tree

int query(int idx)
{
	int sum = 0;
	while (idx > 0) {
		sum += bit[idx];
		idx -= (idx & -idx);
	}
	
	return sum;
}

void initTree()
{
	for (int i = 1; i < 9; ++i) {
		bit[i] += a[i-1];
		int m = i + (i & -i);
		bit[m] += bit[i];
	}
}

void update(int idx, int delta)
{
	a[idx - 1] += delta;
	while (idx < 9) {
		bit[idx] += delta;
		idx += (idx & -idx);
	}
}
