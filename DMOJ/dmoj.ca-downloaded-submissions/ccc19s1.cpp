#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string n;
    
    int h = 0;
    int v = 0;
    
    cin >> n;
    
    for (int i = 0; i < n.length(); i ++){
        if (n[i] == 'H'){
            h ++;
        }else{
            v ++;
        }
    }
    
    h = h%2;
    v = v%2;
    
    if((h==1) && (v==1)){
        cout<<"4 3\n2 1";
    }else if((h==0) && (v==1)){
        cout<<"2 1\n4 3";
    }else if((h==1) && (v==0)){
        cout<<"3 4\n1 2";
    }else{
        cout<<"1 2\n3 4";
    }
}