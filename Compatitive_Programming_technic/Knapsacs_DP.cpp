//Memoization
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll rec(ll i,ll W,ll n,vector<ll>&w,vector<ll>&v, vector<vector<ll>>&dp)
{
    if(i==n) return 0;
    if(dp[i][W] != -1) return dp[i][W];
    ll not_take = rec(i+1,W,n,w,v,dp);
    ll take = INT_MIN;
    if(w[i] <= W)
    {
        take = v[i] + rec(i+1,W-w[i],n,w,v,dp);
    }
    ll maxEl =  max(take,not_take);
    dp[i][W] = maxEl;
    return maxEl;
}
void solution()
{
    ll n,W; cin >> n >> W;
    vector <ll> w(n);
    vector <ll> v(n);
    for(ll i = 0;i < n; i++) cin >> w[i] >> v[i];
    vector<vector<ll>>dp(n+1,vector<ll>(W+1,-1));

    cout << rec(0,W,n,w,v,dp) << '\n';
}
signed main()
{
    int t; cin >> t;
    while(t--) solution();
    return 0;
}