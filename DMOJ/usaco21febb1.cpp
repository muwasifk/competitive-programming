#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cmath>
#include <cstdio>

using namespace std;

unordered_map<string,int> yearAlloc;


unordered_map<string, string> year;
unordered_map<string, int> age;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    yearAlloc["Ox"] = 0;
    yearAlloc["Tiger"] = 1;
    yearAlloc["Rabbit"] = 2;
    yearAlloc["Dragon"] = 3;
    yearAlloc["Snake"] = 4;
    yearAlloc["Horse"] = 5;
    yearAlloc["Goat"] = 6;
    yearAlloc["Monkey"] = 7;
    yearAlloc["Rooster"] = 8;
    yearAlloc["Dog"] = 9;
    yearAlloc["Pig"] = 10;
    yearAlloc["Rat"] = 11;
    
    year["Bessie"] = "Ox";
    age["Bessie"] = 0;
    
    int n; cin >> n;
    string cow1, cow2;
    string norp;
    string myear;
    string filler;
    for (int i = 0; i < n; i ++){
            cin >> cow1 >> filler >> filler >> norp >> myear >> filler >> filler >> cow2;
        if (norp == "previous"){
            year[cow1] = myear;
            if (yearAlloc[year[cow2]] == yearAlloc[myear]){
                age[cow1] = age[cow2] - 12; 
            }else{
                age[cow1] = age[cow2] - ((yearAlloc[year[cow2]] - yearAlloc[myear]) + 12)%12;
            }
            
        }else{
            year[cow1] = myear;
            if (yearAlloc[year[cow2]] == yearAlloc[myear]){
                age[cow1] = age[cow2] + 12; 
            }else{
                age[cow1] = age[cow2] + (12-(yearAlloc[year[cow2]] - yearAlloc[myear]))%12;
            }
        }
        
        if (cow1 == "Elsie"){
            cout << abs(age["Elsie"]);
            break;
        }
    }
    return 0;
}