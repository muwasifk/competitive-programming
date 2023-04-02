#include <iostream>
#include <cmath>
#include <algorithm>
#include <string> 

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    long long int a, b, ba, bb, e;
    
    for (int i = 0; i < 5; i ++){
        cin >> a >> ba >> b >> bb >> e;
        
        long long int at = 0, bt = 0, et; int j = 0;
        while (a > 0){at += (a%10) * pow(ba, j); j++; a /= 10;}
        j = 0;
        while (b > 0){bt += (b%10) * pow(bb, j); j++; b /= 10;}
        et = at*bt;
        
        string end = "";
        while(et>0) {end += (char)(et%e+'0'); et/=e;}
        reverse(end.begin(), end.end());
        cout << end << endl;
    }
    
    
    
}