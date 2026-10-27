#include <bits/stdc++.h>
using namespace std;

bool cheak_prime(int& n)
{
    if(n == 0 || n == 1) return false;
    for(int i = 2; i*i <= n;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        for(int i = 1; i <= num; i++)
        {
            if(cheak_prime(i))
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}