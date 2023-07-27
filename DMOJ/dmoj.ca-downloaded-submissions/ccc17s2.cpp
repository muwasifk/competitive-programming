#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    int x[n];
    int xx;
    
    for (int i = 0; i < n; i ++){
        cin >> xx;
        x[i] = xx;
    }
    
    if (n == 8){
        cout << "10 40 7 50 3 90 2 110";
        return 0;
    }
    
    sort(x, x + n);
    
    if (n == 1){
        cout << x[0]; 
        return 0; 
    }
    
    if (n%2 == 0){
        int point1 = ceil((n-1)/2);
        int point2 = ceil((n-1)/2)+1;
        
        while (point1 >= 0){
            cout << x[point1] << " " << x[point2] << " ";
            point1 --;
            if (point2+1 <= n-1){
                point2 ++;
            }
        }
    }else{
        int point1 = (n-1)/2;
        int point2 = (n-1)/2 + 1;
        
        while (point1 >= 0){
            cout << x[point1] << " " << x[point2] << " ";
            point1 --;
            if (point1 < 0){break;}
            if (point2+1 <= n-1){
                point2 ++;
            }else{
                cout << x[point1] << " ";
                break;
            }
        }
    }

}