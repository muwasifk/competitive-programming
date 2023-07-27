/*
Needs C++14 
Based on UCT Contest 2 Round 2 Problem 2 
*/

#include <iostream> 
#include <vector> 

using namespace std;

int main(){
        int n; cin >> n; 

        vector< pair<int,int> > schedule; 

        for (int i = 0; i < n; i ++){
                pair<int,int> cur; 
                cin >> cur.first >> cur.second; 
                schedule.emplace_back(cur); 
        }

        sort(schedule.begin(), schedule.end(), [](auto &x, auto &y) {
                return x.second < y.second; 
        }); 

        int count = 1; 
        int begin = schedule[0].second; 

        for (int i = 1; i < n; i ++) {
                if (schedule[i].first >= begin) {
                        begin = schedule[i].second; 
                        count ++; 
                }
        }

        cout << count; 
}
