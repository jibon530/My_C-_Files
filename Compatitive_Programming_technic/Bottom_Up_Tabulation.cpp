#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
ll fibo(ll n)
{
    if(n == 0 || n == 1) return n;
    vector<ll> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(ll i = 2; i <= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    cout << fibo(n-1) << '\n';
    return 0;
}