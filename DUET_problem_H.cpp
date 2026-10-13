#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,ans = 1;
    long long MOD = 1e9 + 7;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        ans = (ans * i) % MOD;
    }
    cout << ans << "\n";
    return 0;
}