#include <iostream> 
#include <vector> 
#include <queue>
#include <unordered_map>
#include <string> 

using namespace std; 

struct box{
    int x;
    int y;

    bool operator == (const box &boxx) const{
        return x == boxx.x && y == boxx.y; 
    }
};

struct hash_fn{
    size_t operator() (const box &boxx) const{
        return boxx.x + boxx.y*8; 
    }
};

queue<box> q; 
unordered_map<box, int, hash_fn> visited;  

bool boundaryCheck(int x){
    if (x >= 1 && x <= 8){
        return true; 
    }else{
        return false;  
    }
}

void addtoQ(int x, int y, box current){
    if (boundaryCheck(x) && boundaryCheck(y) && visited.find({x, y}) == visited.end()){
        q.push({x, y}); 
        visited[{x, y}] = visited[current] + 1; 
    }
}

int main(){

    box startx, endx;

    cin >> startx.x >> startx.y; 
    cin >> endx.x >> endx.y; 

    q.push(startx); 
    visited[startx] = 0; 

    box current; 

    while (q.size() != 0){
        current = q.front();
        q.pop(); 

        if (current.x == endx.x && current.y == endx.y){
            cout << visited[current]; 
            return 0; 
        }else{
            addtoQ(current.x + 1, current.y + 2, current);
            addtoQ(current.x + 2, current.y + 1, current);
            addtoQ(current.x - 1, current.y + 2, current);
            addtoQ(current.x - 2, current.y + 1, current);
            addtoQ(current.x - 2, current.y - 1, current);
            addtoQ(current.x - 1, current.y - 2, current);
            addtoQ(current.x + 1, current.y - 2, current);
            addtoQ(current.x + 2, current.y - 1, current);
        }
    }
    return 0; 
}