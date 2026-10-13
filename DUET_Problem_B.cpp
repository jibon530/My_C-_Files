#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, q;
    cin >> n >> q;
    
    vector<long long> a(n + 1);
    vector<long long> pref(n + 1, 0);
    
    for (int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        pref[i] = pref[i - 1] ^ a[i]; 
    }

    while (q--) 
    {
        int l, r;
        cin >> l >> r;
        long long ans = pref[r] ^ pref[l - 1];
        cout << ans << "\n";
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}