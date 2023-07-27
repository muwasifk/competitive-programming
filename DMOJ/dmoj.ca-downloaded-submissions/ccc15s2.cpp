#include <iostream> 
#include <string> 

using namespace std; 

char sizes[1000000]; 

void initarr(){
    for (int i = 0; i < 1000000; i++){
        sizes[i] = 'x'; 
    }
}

char convert(char size){
    if (size == 'L'){
        return 'c'; 
    }else if (size == 'M'){
        return 'b'; 
    }else if (size == 'S'){
        return 'a'; 
    }
}

int main(){
    int J;
    int A;
    cin >> J; 
    cin >> A;

    char currentsize; 
    for (int j = 0; j < J; j++){
        cin >> currentsize; 
        if (currentsize == 'S'){
            sizes[j] = 'a'; 
        }else if (currentsize == 'M'){
            sizes[j] = 'b'; 
        }else if (currentsize == 'L'){
            sizes[j] = 'c'; 
        }
    }

    int counter = 0; 
    char requestSize; 
    int requestJersey; 

    for (int a = 0; a < A; a++){
        cin >> requestSize >> requestJersey; 
        if (sizes[requestJersey - 1] >= convert(requestSize)){
            counter ++; 
            sizes[requestJersey - 1] = 'A'; 
        }
    }

    cout << counter; 
}