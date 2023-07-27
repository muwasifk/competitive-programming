#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    while (n--){
        long int a, b, c;
        cin >> a >> b >> c;
        
        if (a*b != c){
            cout << "16 BIT S/W ONLY" << endl;
        }else{
            cout << "POSSIBLE DOUBLE SIGMA" << endl;
        }
    }
}