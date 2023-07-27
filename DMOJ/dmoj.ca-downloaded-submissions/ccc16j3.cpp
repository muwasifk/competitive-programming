#include <iostream>
 
#include <string> 
using namespace std;

int check_palindrome_and_length(string givenword, int largest_int){
    if (givenword == string(givenword.rbegin(), givenword.rend())) {
        if (givenword.length() > largest_int){
            largest_int = givenword.length();
            return largest_int;
        } else{
            return 0;
        }
    }
}

int main(){
    string word;
    cin >> word;
    string current_palindrome;
    int current_length = word.length();

    string current_palindrome;
    for (int i=0; i < word.length(); i++){
        for (int j = 0; j < i; j++){
            string abcd = word.substr(i, j);
            if (check_palindrome_and_length(current_palindrome, current_length) != 0){
                        current_length = check_palindrome_and_length(current_palindrome, current_length);
                    }
        }
    }

    cout << current_length;
    return 0;
}