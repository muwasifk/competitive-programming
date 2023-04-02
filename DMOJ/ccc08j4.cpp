#include <iostream> 
#include <stack> 

using namespace std; 

string s; 

int main(){
    while (true){
        getline(cin, s); stack<string> stk; 
        if(s=="0") break;
        for (int i = (int)s.size() - 1; i >= 0; i -- ){
            if (s[i] == ' ') continue; 
            if (s[i] == '+' || s[i] == '-'){
                string op1 = stk.top(); stk.pop(); string op2 = stk.top(); stk.pop();
                stk.push(op1 + " " + op2 + " " + s[i]); 
            }else{
                stk.push(s.substr(i, 1)); 
            }
        }
        cout << stk.top() << endl; 
    }
}