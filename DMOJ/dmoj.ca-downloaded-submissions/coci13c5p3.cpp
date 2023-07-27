#include <iostream>
#include <stack>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int32_t main() {
	string o; cin >> o;
	string b; cin >> b;
	
	if (b.length() == 0){
		cout << o; return 0;
	}
	
// 	if (b.length() == 1){
// 		string ret;
// 		for (int i = 0; i < o.length(); i ++){
// 			if (o[i] != b[0]) {
// 				ret += o[i];
// 			}
// 		}
		
// 		cout << ret; return 0;
// 	}
	
	stack<int> v;
	
	for (int i = 0; i < o.length(); i ++){
		v.push(i);
		
		if (v.size() >= b.size()){
			bool flag = false;
			
			stack<int> thr;
			
			int j = b.length() - 1;
			while (j >= 0){
				if (o[v.top()] != b[j]){
					while (thr.empty() == false) {
						v.push(thr.top()); thr.pop();
					}
					break;
				} else {
					thr.push(v.top()); v.pop(); j--;
				}
			}
			
			if (flag == false){
				while (thr.empty() == false) thr.pop();
			}
		}
	}
	
	string ret;
	while (v.empty() == false){
		ret += o[v.top()]; v.pop();
	}
	
	if (ret.length() == 0) cout << "FRULA";
	else {reverse(ret.begin(), ret.end()); cout << ret;};
}