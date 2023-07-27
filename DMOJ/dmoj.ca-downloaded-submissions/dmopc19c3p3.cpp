/*
	At any given point, if running sum is positive number n then at any running sum > n, can form a possible array --> between n and >n, there must be a majority of 1's
 
	Invert for negative running sums
 */

#include <iostream>

using namespace std;

#define int long long

int n; const int MAXN = 1.5e5 + 2;

int arr[MAXN];

int posbit[MAXN];
int negbit[MAXN];

void posupdate(int idx)
{
	while (idx <= n) {
		posbit[idx] ++; idx += (idx & -idx);
	}
}

int posquery(int idx)
{
	int s = 0;
	
	while (idx >= 1) {
		s += posbit[idx]; idx -= (idx & -idx);
	}
	
	return s;
}

int negquery(int idx)
{
	int s = 0;
	
	while (idx <= n) {
		s += negbit[idx]; idx += (idx & -idx);
	}
	
	return s;
}

void negupdate(int idx)
{
	while (idx >= 1) {
		negbit[idx] ++; idx -= (idx & -idx);
	}
}

int32_t main()
{
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		int temp; cin >> temp;
		
		if (temp == 2) arr[i] = -1;
		else arr[i] = 1;
	}
	
	int pfx = 0;
	int counter = 0;
	
	for (int i = 0; i < n; ++i) {
		pfx += arr[i];
		
		if (pfx >= 1) {
			counter ++;
			counter += posquery(pfx);
			counter += negquery(1);
			
			posupdate(pfx + 1);
		} else {
			counter += negquery(-pfx + 2);
			negupdate(-pfx + 1);
		}
	}
	
	cout << counter;
}