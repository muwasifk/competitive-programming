#include <bits/stdc++.h>

using namespace std;

int main() {  
  int b;
  cin >> b; 
  int r = 5 * b - 400;
  cout << r << endl;            
  cout << (r == 100 ? 0 : (r < 100 ? 1 : -1)) << endl;
  return 0;
}