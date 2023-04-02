#include <iostream>
#include <list>
#include <string>
#include <stdlib.h>
using namespace std; 

void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}

int main(){
    string mainstr;
    string cycler;

    cin >> mainstr;
    cin >> cycler;

    int conditional_temp = 0;

    for (int i=0; i<cycler.length(); i++){
        leftrotate(cycler, i);
        if (mainstr.find(cycler) != string::npos) {
            conditional_temp = 1;
        }
    }

    if (conditional_temp == 1){
        cout << "yes";
    } else{
        cout << "no";
    }
}