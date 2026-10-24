#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {   
        ll n,k,ans;
        cin >> n >> k;
        ans = k +((k-1)/(n-1));
        cout << ans << "\n";
    }
    return 0;
}