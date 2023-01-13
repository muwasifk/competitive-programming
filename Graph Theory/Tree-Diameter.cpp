vector<int> tree[10001];

int farthest = 0;
int endnode = 0;

void dfs(int start, int parent, int distance){
    
    if (distance > farthest){
        endnode = start;
        farthest = distance;
    }
    
    for (int adjacent : tree[start]){
        if (adjacent != parent){
            dfs(adjacent, start, distance + 1);
        }
    }
    
}

// find diameter by running dfs from random node and then from the furthest to the furthest 
