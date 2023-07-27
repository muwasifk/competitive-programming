#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>

#define f first
#define s second

using namespace std;

#define MAXX 501

int graph[MAXX][MAXX], distances[MAXX][MAXX];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    long long int n, k; cin >> n >> k;

    for (int i =1 ; i <= n; i ++){
        for (int j = 1; j <= n; j ++){
            cin >> graph[i][j];
        }
    }

    int previous = 1; int current = 2;

    distances[previous][current] = 1;

    k -- ;

    while (true){
        int adjacent = graph[current][previous];
        
        if (distances[current][adjacent] != 0){
            k %= (distances[previous][current] - distances[current][adjacent] + 1);
        }

        if (k == 0){
            cout << previous;
            return 0;
        }

        k --;

        distances[current][adjacent] = distances[previous][current] + 1;

        previous = current;
        current = adjacent;
    }
}