#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= floor(sqrt(num)); i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int main(){
    int n;
    cin >> n;
    
    int x;
    for (int i = 0; i < n; i ++){
        cin >> x;
        for (int j = 2; j < x; j++){
            if (isPrime(j)){
                if (isPrime(2*x-j)){
                    cout << j << " " << 2*x-j << endl;
                    break;
                }
            }
        }
    }
}