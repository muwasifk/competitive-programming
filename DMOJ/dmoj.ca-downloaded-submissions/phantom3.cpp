#include <bits/stdc++.h>

using namespace std;

int m, n;
int main()
{   
    int p = 2;
    cin >> m >> n;
    bool prime[n-m];
    for(int i = 0; i < n + 1 - m; i ++)
    {
        prime[i] = true;
    }

    if(m == 0)
    {
        prime[0] = false;
        prime[1] = false;
    }
    if(m == 1)
    {
        prime[0] = false;
    }

    while(p * p <= n)
    {
        if((p * p) < m)
        {
            for(int j = (ceil(m/p) * p); j < n + 1; j += p)
            {
                prime[j - m] = false;
            }
        } else {
            for(int j = p * p; j < n + 1; j += p)
            {
                prime[j - m] = false;
            }
        }

        p += 1;
    }

    for(int k = 0; k < n + 1 - m; k ++)
    {
        if(prime[k])
        {
            cout << k + m << endl;
        }
    }
}