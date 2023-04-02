#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;

    char arr[n][5];

    for (int i = 0; i < n; i ++){
        for (int j = 0; j < 5; j ++){
            cin >> arr[i][j];
        }
    }

    vector<int> c;

    for (int i = 0; i < 5; i ++){
        int count = 0;

        for (int j = 0; j <n; j ++){
            if (arr[j][i] == 'Y'){
                count ++;
            }
        }

        c.push_back(count);
    }

    int m = *max_element(c.begin(), c.end());

    vector<int> x;

    for (int i = 0; i < 5; i ++){
        if (c[i] == m){
            x.push_back(i);
        }
    }

    for (int i = 0; i < x.size() - 1; i ++){
        cout << x[i] + 1 << ",";
    }

    cout << x[x.size()-1]+1;
}