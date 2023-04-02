#include <iostream>

#include <string>
using namespace std;

void main (){

    int ott_time;

    cin >> ott_time;

    string ott_time_string;

    ott_time_string = to_string(ott_time);


    cout << (ott_time)%2400 << "in Ottawa" << endl;
    cout << (ott_time - 300)%2400 << "in Victoria" << endl;
    cout << (ott_time - 200)%2400 << "in Edmonton" << endl;
    cout << (ott_time - 100)%2400 << "in Winnipeg" << endl;
    cout << (ott_time)%2400 << "in Toronto" << endl;
    cout << (ott_time + 100)%240 << "in Halifax" << endl;
    cout << (ott_time + 130)%2400 << "in St. John’s" << endl;
    
}