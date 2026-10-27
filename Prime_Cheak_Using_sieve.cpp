#include <bits/stdc++.h>
using namespace std;

vector<bool> cheak_prime(int &n)
{
    vector<bool> primes(n + 1, true);
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (primes[i] == true)
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
    return primes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int num,nn;
        cin >> nn >> num;
        vector<bool> p = cheak_prime(num);
        for(int i = nn; i <= num; i++)
        {
            if(p[i])
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}