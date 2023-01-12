vector<pair<int, pair<int, int>>> ed; // vector of edge and nodes

int cnt = 0;

vector<int> ans;

void kruskal(){
    DSU dsu(n+1);
    for (auto a : ed){
        if (dsu.unite(a.s.f, a.s.s)){
            ans.push_back(a.f);
            cnt ++;
        }
    }
}
