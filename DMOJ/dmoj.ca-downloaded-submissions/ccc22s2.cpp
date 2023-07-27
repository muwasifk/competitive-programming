#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<string, vector<string>> together;
unordered_map<string, vector<string>> seperate;


int tog(string s1, string s2, string s3){
    int v = 0;
    
    for (int i = 0; i < together[s1].size(); i ++){
        
            if (together[s1][i] != s2 && together[s1][i] != s3){
                v ++;
            }
           
        }
    
    for (int i = 0; i < together[s2].size(); i ++){
       
            if (together[s2][i] != s1 && together[s2][i] != s3){
                v ++;
            }

        }
    
    for (int i = 0; i < together[s3].size(); i ++){
        
            if (together[s3][i] != s2 && together[s3][i] != s1){
                v ++;
            }

        }
    
    
    return v;
}


int sepe(string s1, string s2, string s3){
    int v = 0;
    for (int i = 0; i < seperate[s1].size(); i ++){
        
            if (seperate[s1][i] == s2 || seperate[s1][i] == s3){
                v ++;
            }

        }
    
    for (int i = 0; i < seperate[s2].size(); i ++){
       
            if (seperate[s2][i] == s1 || seperate[s2][i] == s3){
                v ++;
            }

        }
    
    for (int i = 0; i < seperate[s3].size(); i ++){
     
            if (seperate[s3][i] == s2 || seperate[s3][i] == s1){
                v ++;
            }
    }
    
    
    return v;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int x;
    cin >> x;
    
    string a, b;
    for (int i = 0; i < x; i ++){
        cin >> a >> b;
        
        together[a].emplace_back(b);
        
        together[b].emplace_back(a);
    }
    
    int y;
    cin >> y;
    
    for (int i = 0; i < y; i ++){
        cin >> a >> b;
        
        seperate[a].emplace_back(b);
        
        seperate[b]. emplace_back(a);
    }
    
    int g;
    cin >> g;
    
    string s1,s2,s3;
    int bb = 0;
    for (int i = 0; i < g; i ++){
        
        cin >> s1 >> s2 >> s3;
        
        bb += tog(s1, s2, s3);
        bb += sepe(s1, s2, s3);
        
    }
    
    cout << bb/2;
}