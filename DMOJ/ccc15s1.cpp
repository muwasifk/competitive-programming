#include <iostream> 
#include <stack> 

using namespace std; 

stack<int> s; 

int main(){
    int k; cin >> k; 

    for (int i = 0, x; i < k; i ++){
        cin >> x; 
        if (x != 0) s.push(x);
        else s.pop(); 
    }

    int sum = 0; 
    while (s.size() != 0){
        int x = s.top(); s.pop(); 
        sum += x; 
    }
    cout << sum; 
}