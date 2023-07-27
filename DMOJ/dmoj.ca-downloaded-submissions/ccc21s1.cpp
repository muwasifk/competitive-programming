#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

using namespace std;

vector<double> h; vector<double> w = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    
    for (int i = 0; i < n + 1; i ++){
        double x; cin >> x; h.emplace_back(x);
    }
    
    for (int i = 0; i < n; i ++){
        double x; cin >> x; w.emplace_back(x);
    }
    
    double area = 0;
    for (int i = 1; i < n + 1; i ++){
        area += (h[i-1] + h[i])/2 * w[i];
    }
    
    cout << fixed << setprecision(6) << area;
}