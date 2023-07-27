#include <iostream>

using namespace std;
int pieces, people;

int pi(int pos, int start_num, int num_left){
    int count = 0;
    if (pos == people){
        return 1;
    }else if((people-pos)*start_num > num_left){
        return 0;
    }
    for (int i = start_num; i <=num_left; i++){
        count += pi(pos+1, i, num_left-i);
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> pieces >> people;

    int ans = pi(0,1,pieces);
    cout << ans <<'\n';

}