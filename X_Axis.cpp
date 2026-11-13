/*
It's me Jibon
Problem link:https://codeforces.com/problemset/problem/1986/A
*/
#include <bits/stdc++.h>
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        int a,b,c; cin >> a >> b >> c;
        int mx = max({a,b,c}); int mi = min({a,b,c});
        int ans = mx - mi;
        cout << ans << '\n';
    }
    return 0;
}