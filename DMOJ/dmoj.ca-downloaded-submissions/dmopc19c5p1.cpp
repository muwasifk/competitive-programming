#include <iostream>
#include <unordered_set>

using namespace std; 

unordered_set<string> s; 

int main(){ 
    int n, m; cin >> n >> m; 
    for (int i = 0; i < n; i ++){
        string x; cin >> x; 
        s.insert(x); 
    }

    int count = 0; 
    for (int i = 0; i < m; i ++){
        int k; cin >> k; 
        bool flag = 0; 
        for (int j = 0; j < k; j ++){
            string y; cin >> y; 
            if (s.find(y) == s.end()) flag = 1; 
        }
        if (flag == 0) count ++;  
    }

    cout << count; 
}