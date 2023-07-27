#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unordered_set<int> row_nums;
    unordered_set<int> col_nums;
    
    int m, n;
    cin >> m;
    cin >> n;
    
    int k;
    cin >> k;
    
    long int rows_affected = 0;
    long int columns_affected = 0;
    
    char a;
    int b;
    for (int i = 0; i < k; i ++){
        cin >> a >> b;
        
        if (a == 'R'){
            if (row_nums.find(b) == row_nums.end()){
                row_nums.emplace(b);
            }else{
                row_nums.erase(b);
            }
        }else{
            if (col_nums.find(b) == col_nums.end()){
                col_nums.emplace(b);
            }else{
                col_nums.erase(b);
            }
        }
    }
    
    rows_affected = row_nums.size();
    columns_affected = col_nums.size();
    
    cout << rows_affected*n + columns_affected*m - 2*rows_affected*columns_affected;
    return 0;
}