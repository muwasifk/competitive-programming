#include <iostream>
#include <string> 

using namespace std; 

string findNumber(string astring){
    int happyCounter = 0;
    int sadCounter = 0;
    if (astring.length() > 2){
        for (int i = 0; i < astring.length() - 3; i++)
        {
            if (astring.substr(i, 3) == ":-)")
            {
                happyCounter ++; 
            }
            else if (astring.substr(i,3) == ":-(")
            {
                sadCounter ++; 
            }
        }        
    } 


    if (happyCounter > sadCounter){
        return "happy";
    }else if (happyCounter < sadCounter){
        return "sad"; 
    }else if (happyCounter == 0 && sadCounter == 0){
        return "none"; 
    }else if (happyCounter == sadCounter){
        return "unsure";
    }
    else{
        return "none";
    }
}

int main(){
    string message;
    getline(cin,message); 
    cout << findNumber(message) << endl; 
    return 0;
}