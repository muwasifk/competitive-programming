#include <iostream> 

using namespace std; 

int numbers[100]; 

void removeElement(int index, int currentSize){
    for (int i = index+1; i <= currentSize; i++){
        numbers[i-1] = numbers[i];
    }
}

int main(){
    int K = 0;
    int m = 0;
    int r = 0;  
    cin >> K;
    cin >> m; 

    for (int y= 1; y <= K; y++){
        numbers[y] = y; 
    }

    for(int i = 0; i < m; i++){
        cin >> r;
        for(int j = 1; j <= K; j++){
            if (j%r == 0){
                numbers[j] = 0;  
            }
        }
        for (int j = 1; j < K; j++){
            if (numbers[j] == 0){
                removeElement(j, K);
                K--; 
            }
        }
    }
    for (int x = 1; x <= K; x++){
        if (numbers[x]!= 0){
            cout << numbers[x] << endl;
        }
         
    }
}