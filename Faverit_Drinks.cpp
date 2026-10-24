#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> vect(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vect[i];
    }
    sort(vect.begin(), vect.end());

    int q;
    cin >> q;

    while (q--)
    {
        int m;
        cin >> m;

        auto it = upper_bound(vect.begin(), vect.end(), m);
        int count = it - vect.begin();
        cout << count << "\n";
    }

    return 0;
}