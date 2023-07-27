#include <bits/stdc++.h>
 
using namespace std; 
int main() {

    int n, a_total = 0, b_total = 0, equal_day;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    for (int i = 0; i < n; i++){
        a_total += a[i];
        b_total += b[i];
        if (a_total = b_total){
            equal_day = n;
        }
    }

    cout << equal_day+1;
}