#include <iostream> 
#include <string> 

using namespace std;

string buttonOne(string playlist){
    string temp = playlist; 
    playlist[0] = temp[2]; 
    playlist[2] = temp[4];
    playlist[4] = temp[6];
    playlist[6] = temp[8];
    playlist[8] = temp[0];
    return playlist; 
}

string buttonTWo(string playlist){
    string temp = playlist; 
    playlist[0] = temp[8]; 
    playlist[2] = temp[0];
    playlist[4] = temp[2];
    playlist[6] = temp[4];
    playlist[8] = temp[6];
    return playlist;
}

string buttonThree(string playlist){
    string temp = playlist; 
    playlist[0] = temp[2]; 
    playlist[2] = temp[0]; 
    return playlist; 
}


int main(){
    int b, n;
    string playlist = "A B C D E";
    while (b != 4){
        cin >> b;
        cin >> n; 
        if (b != 4){
            for (int i = 0; i < n; i ++){
                if (b == 1){
                    playlist = buttonOne(playlist); 
                }else if (b == 2){
                    playlist = buttonTWo(playlist);
                }else if (b == 3){
                    playlist = buttonThree(playlist);
                }else if (b == 4){
                    return 0;
                }
            }
        }else{
            cout << playlist; 
            return 0;
        }
        
    }
}