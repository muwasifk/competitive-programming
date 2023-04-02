#include <bits/stdc++.h>

using namespace std;

int xorcalc(int x){
    if(x % 4 ==0){ 
        return x;
    }
	if(x%4==1){ 
	    return 1;
	}
	if(x%4==2){ 
	    return x+1;
	}
	return 0; 
}

int main() {
    int t, a, b;
    cin >> t; 
    
    while (t--){
        cin >> a >> b;
        cout << (xorcalc(a-1)^xorcalc(b)) << endl;
    }
}