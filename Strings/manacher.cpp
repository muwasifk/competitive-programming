#include <iostream> 
#include <algorithm> 

int mtn[50009];

void manacher(string s)
{
	string ns = "@";
	
	for (int i = 0; i < s.size(); i++) ns += "#" + s.substr(i, 1); ns += "#$";
	
	int cptr = 0, rptr = 0;
	
	for (int i = 1; i < ns.size() - 1; i++) {
		if (rptr > i) mtn[i] = min(rptr - i, mtn[cptr - (i - cptr)]);
		
		while (ns[i + 1 + mtn[i]] == ns[i - 1 - mtn[i]]) mtn[i] ++;
		
		if (i + mtn[i] > rptr) {
			cptr = i; rptr = i + mtn[i];
		}
	}
	
	int cindex = 0, cval = 0;
	
	for (int i = 1; i < ns.size(); i++) {
		if (mtn[i] > cval) {
			cval = mtn[i]; cindex = i;
		}
	}
	
	cout << s.substr((cindex - 1 - cval)/2, cval) << '\n' << cval << '\n';
}

int32_t main()
{
	manacher(s); 
}
