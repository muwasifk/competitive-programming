#include <iostream>

using namespace std;

int main(){
    int f, m, b;
    int tf, tm, tb;
    
    cin >> f >> m >> b;
    cin >> tf >> tm >> tb;
    
    cout << tf + tm + tb << " " << f*tf + m*tm + b*tb << "\n";
    return 0;
}