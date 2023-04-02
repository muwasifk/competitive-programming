#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define MAX 2e5 + 5

vector<int> freq(MAX);

bool pal(string num){
  int lptr = 0;
  int rptr = num.length() - 1;
    
  while(rptr >= lptr){
    if(num[lptr] != num[rptr]) return false;
    else{++lptr; --rptr;}
  }
  return true;
}

int main(){
    long long l, r; cin >> l >> r;
    
    int c = 0;
    for (long long i = l; i <= r; i ++){
        if (pal(to_string(i))) c ++;
    }
    cout << c;
}