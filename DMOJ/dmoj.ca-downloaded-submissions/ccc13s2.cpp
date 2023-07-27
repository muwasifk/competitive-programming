#include <iostream> 

using namespace std; 

int main(){
    int maxWeight = 0;
    int currentCars[4] = {0,0,0,0}; 
    int numCars = 0; 
    int ableCars = 0;  
    int currentWeight = 0;
    int sum = 0; 

    cin >> maxWeight;
    cin >> numCars; 


    for (int i = 0; i < numCars; i++){
    cin >> currentWeight;
    currentCars[i%4] = currentWeight;
        if (currentCars[0] + currentCars[1] + currentCars[2] + currentCars[3] <= maxWeight){
            ableCars ++; 
        }else{
            cout << ableCars; 
            return 0; 
        }
        
    }
    
    cout << ableCars;
    return 0; 
}