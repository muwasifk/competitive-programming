#include <bits/stdc++.h>

using namespace std;

int n;
int main()
{   
    int p = 2;
    cin >> n;
    bool prime[n];
    for(int i = 0; i < n + 1; i ++)
    {
        prime[i] = true;
    }


    while(p * p <= n)
    {
            for(int j = (ceil(m/p) * p); j < n + 1; j += p)
            {
                prime[j] = false;
            }
        } else {
            for(int j = p * p; j < n + 1; j += p)
            {
                prime[j] = false;
            }
        

        p += 1;
    }

    for(int k = 0; k < n + 1; k ++)
    {
        if(prime[k])
        {
            cout << k << endl;
        }
    }
}