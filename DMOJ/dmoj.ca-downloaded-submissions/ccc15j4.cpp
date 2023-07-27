#include <iostream> 

using namespace std; 

int times[101] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int watch[101] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main(){
    int M; 
    cin >> M; 

    char code; 
    int number; 

    int a = 0; 

    for (int i = 0; i < M; i++){
        cin >> code >> number; 
        if (code == 'R'){
            times[number] = a - times[number]; 
            watch[number] = -1; 
            a++; 
        }else if (code == 'S'){
            times[number] = a - times[number];
            watch[number] = 1; 
            a++; 
        }else{
            a = a + number - 1; 
        }
    }
    for (int i = 0; i < 101; i++){
        if (watch[i] == 1){
            cout << i << " " << times[i] << endl; 
        }else if (watch[i] == -1){
            cout << i << " " << -1 << endl; 
        }
    }
    return 0;
}