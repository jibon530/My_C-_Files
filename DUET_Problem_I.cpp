#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long f1 = 0, f2 = 1, fibo = 0;
    long long MOD = 1e9 + 7;

    for(int i = 1; i <= n; i++)
    {
        fibo = (f1 + f2) % MOD;
        f1 = f2;
        f2 = fibo;
    }
    
    cout << fibo << "\n";
    return 0;
}