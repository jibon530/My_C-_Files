//Recursive Code
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll rec(ll i,ll W,ll n,vector<ll>&w,vector<ll>&v)
{
    if(i==n) return 0;
    ll not_take = rec(i+1,W,n,w,v);
    ll take = INT_MIN;
    if(w[i] <= W)
    {
        take = v[i] + rec(i+1,W-w[i],n,w,v);
    }
    ll maxEl =  max(take,not_take);
    return maxEl;
}
void solution()
{
    ll n,W; cin >> n >> W;
    vector <ll> w(n);
    vector <ll> v(n);
    for(ll i = 0;i < n; i++) cin >> w[i] >> v[i];
    cout << rec(0,W,n,w,v) << '\n';
}
signed main()
{
    int t; cin >> t;
    while(t--) solution();
    return 0;
}