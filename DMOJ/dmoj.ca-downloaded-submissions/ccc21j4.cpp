#include <iostream> 
#include <string> 
#include <algorithm> 

using namespace std; 

int main(){
    string books; 
    cin >> books; 

    int numL = count(books.begin(), books.end() + 1, 'L');
    int numM = count(books.begin(), books.end() + 1, 'M');
    int numS = count(books.begin(), books.end() + 1, 'S');

    int numL1 = 0;
    int numL2 = 0;
    int numM1 = 0; 
    int numM2 = 0; 

    for (int i = 0; i < numL + numM; i ++){
        if (i < numL){
            if (books[i] == 'L'){
                numL1 ++; 
            }else if(books[i] == 'M'){
                numM1 ++; 
            }
        }else{
            if (books[i] == 'L'){
                numL2 ++; 
            }else if (books[i] == 'M'){
                numM2 ++; 
            }
        }
    }

    cout << numL - numL1 + numM - numM2 - min(numM1, numL2); 
}