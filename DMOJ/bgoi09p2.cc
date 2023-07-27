#include <iostream>
#include <vector>

using namespace std; 

struct DSU {

        vector<int> e; 

        // Init the actual DSU 
        DSU(int N) { e = vector<int>(N, -1); }

        // Get the head of the node
        int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }

        // Check if two nodes are connected
        bool same_set(int a, int b) { return get(a) == get(b); }

        // Return the size of a path from a node
        int size(int x) { return -e[get(x)]; }

        // Merge two nodes together (+ their paths) with rank
        bool unite(int x, int y) {

                x = get(x); y = get(y);

                if (x == y) return false;

                if (e[x] > e[y]) swap(x, y);

                e[x] += e[y]; e[y] = x;

        return true;
        }
};

int main(){ 
        
}
