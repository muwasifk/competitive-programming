#include <iostream> 
#include <unordered_map>

using namespace std; 

unordered_map<string,int> map; 

int main(){map["Poblano"]=1500;map["Mirasol"]=6000;map["Serrano"]=15500;map["Cayenne"]=40000;map["Thai"]=75000;map["Habanero"]=125000;int n;cin >>n;string x;int s=0; while(n--){cin >> x;s+=map[x];}cout << s;}