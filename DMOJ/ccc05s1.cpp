#include <iostream> 
#include <string> 
#include <algorithm> 

using namespace std; 

string key2 = "ABC"; 
string key3 = "DEF"; 
string key4 = "GHI"; 
string key5 = "JKL"; 
string key6 = "MNO"; 
string key7 = "PQRS"; 
string key8 = "TUV"; 
string key9 = "WXYZ"; 

string removeHyphens(string number){
    number.erase(remove(number.begin(), number.end(), '-'), number.end()); 
    return number; 
}

int keyNumber(char letter){
    if (key2.find(letter) != -1){
        return 2; 
    }else if (key3.find(letter) != -1){
        return 3; 
    }else if (key4.find(letter) != -1){
        return 4;
    }else if (key5.find(letter) != -1){
        return 5; 
    }else if (key6.find(letter) != -1){
        return 6; 
    }else if (key7.find(letter) != -1){
        return 7; 
    }else if (key8.find(letter) != -1){
        return 8; 
    }else if (key9.find(letter) != -1){
        return 9; 
    }
}

string convert(string number){
    string s; 
    for (int i = 0; i < number.length(); i++){
        if ((int)number[i] >= 48 && (int)number[i] <= 57){
            s += number[i]; 
        }else{
            int x = keyNumber(number[i]); 
            s += to_string(x); 
        }
    }
    return s; 
}

string addHyphens(string number){
    string partOne, partTwo, partThree; 
    partOne = number.substr(0, 3); 
    partTwo = number.substr(3,3);
    partThree = number.substr(6, 4); 
    return partOne + "-" + partTwo + "-" + partThree; 
}

int main(){
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++){
        string phoneOriginal; 
        cin >> phoneOriginal; 
        phoneOriginal = removeHyphens(phoneOriginal);
        if (phoneOriginal.length() >= 10){
            phoneOriginal = phoneOriginal.substr(0, 10);
        }
 
        phoneOriginal = convert(phoneOriginal);
        cout << addHyphens(phoneOriginal) << endl; 
    }
}