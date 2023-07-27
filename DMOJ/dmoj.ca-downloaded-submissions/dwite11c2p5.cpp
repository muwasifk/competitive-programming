#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct DSU {

    vector<int> e;

    DSU(int N) { e = vector<int>(N, -1); }

    int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }


    bool same_set(int a, int b) { return get(a) == get(b); }


    int size(int x) { return -e[get(x)]; }


    bool unite(int x, int y) {

        x = get(x); y = get(y);

        if (x == y) return false;

        if (e[x] > e[y]) swap(x, y);

        e[x] += e[y]; e[y] = x;

        return true;

    }

};

unordered_map<string, int> cities;

int counter = 0;

void setindx(string city){
    if (cities.find(city) == cities.end()){
        cities[city] = counter;
        counter ++;
        return;
    }
}

int main(){
    
    int t = 5;
    while (t -- ){
        int n; cin >> n;
        
        DSU dsu (2 * n);
        
        for (int i = 0; i < n; i ++){
            char cmd; string city, cityy;
            
            cin >> cmd >> city >> cityy;
            setindx(city); setindx(cityy);
            
            if (cmd == 'p'){
                dsu.unite(cities[city], cities[cityy]);
            }
            
            else if (cmd == 'q'){
                bool y = dsu.same_set(cities[city], cities[cityy]);
                
                if (y) cout << "connected" << endl;
                else cout << "not connected"<< endl;
            }
        }
        
    }
    
}