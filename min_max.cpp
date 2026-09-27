#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        double x,l,r;
        cin >> x;
        r = (180-x) / 2;
        l = 180 - (2*x);
        cout << fixed << setprecision(9) << l << " " << r << "\n";
    }
    return 0;
}