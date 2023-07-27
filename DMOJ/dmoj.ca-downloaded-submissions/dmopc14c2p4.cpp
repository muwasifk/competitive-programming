#include <iostream>
#include <vector>

using namespace std;

vector<int> psa = {0};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;

    int back = 0;
    for (int _ = 0, x; _ < n; _ ++){
        cin >> x;
        psa.push_back(back + x);
        back += x;
    }

    int q; cin >> q;

    for (int _ = 0, a, b; _ < q; _ ++){
        cin >> a >> b;
        cout << psa[b + 1] - psa[a] << "\n";
    }
}