#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std; 

vector<int> row; 
vector<int> med; 

int main() {
        int n; cin >> n; 

        for (int i = 0; i < n; i ++){
                for (int j = 0; j < n; j++){
                        int temp; cin >> temp; 
                        row.push_back(temp); 
                }

                sort(row.begin(), row.end()); 

                if (n%2 == 0) med.push_back((row[n/2-1] + row[n/2])/2); 
                else med.push_back(row[n/2]); 

                row.clear(); 
        }
        sort(med.begin(), med.end()); int k = med.size(); 

        if (n%2 == 0) cout << (med[k/2-1] + med[k/2])/2; 
        else cout << med[k/2]; 
}