#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float a, b; char o; 

    cin >> a; 
    while (cin >> b >> o){
        if (o == '+') a += b; 
        else if (o == '-') a -= b; 
        else if (o == '*') a *= b; 
        else if (o == '/') a /= b; 
        else if (o == '%') a = fmod(a, b);
        else if (o == '^') a = pow(a, b);
    }

    cout << fixed << setprecision(1) << a; 
}