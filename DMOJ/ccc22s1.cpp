#include <iostream>

using namespace std; int main(){ int n; cin >> n; int c = 0; for (int i = 0; i < (int)n/4+1; i ++){ if ((n-i*4)%5==0) c ++; } cout << c; }