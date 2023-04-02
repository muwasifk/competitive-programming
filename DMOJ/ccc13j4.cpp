#include <iostream> 
using namespace std;

int tasks[100]; 

void subsort(int max){
    for (int i = 0; i < max; i++){
        if (tasks[i] > tasks[i+1]){
            int temp = tasks[i+1]; 
            tasks[i+1] = tasks[i];
            tasks[i] = temp;  
        }
    }
}

int main(){
    int minutes; 
    cin >> minutes;
    int numtasks;
    cin >> numtasks; 

    for (int i = 0; i < numtasks; i ++){
        int current; 
        cin >> current; 
        tasks[i] = current; 
    }

    for (int j = numtasks-1; j>=0; j--){
        subsort(j); 
    }    

    int sum = 0; 
    int counter = 0;
    for (int k = 0; k < numtasks; k++){
        sum += tasks[k];
        counter ++; 
        if (sum > minutes){
            cout << counter - 1; 
            return 0; 
        }
    }
}