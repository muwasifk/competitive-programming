#include <iostream> 

using namespace std; 

int main(){
    
    int initial, final; cin >> initial >> final; 
    
    if (initial < 20 || initial > 23){
        cout << "Unhealthy" << endl; 
        return 0; 
    }
    
    if (final < 6 || final > 9){
        
        cout << "Unhealthy" << endl; 
        return 0; 
        
    }
    
    int tslept = 24 - initial + final; 
    
    if (tslept < 8 || tslept > 10){
        cout << "Unhealthy" << endl; 
        return 0; 
    }
    
    cout << "Healthy" << endl;
    
}