#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <int> vect(n);
    for(int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    sort(vect.begin(), vect.end());
    int q;
    cin >> q;
    while(q--)
    {
        int m,ans = 0;
        cin >> m;
        for(int val : vect)
        {
            if(val <= m) ans++;
            else break;
        }
        cout << ans << "\n";
    }
    return 0;
}