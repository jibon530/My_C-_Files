#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int odd = 0;
        vector <int> vect;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            vect.push_back(value/2);
        }
        
        for(int i = 0; i < n;i++)
        {
            if (vect[i] % 2 != 0)
            {
                odd++;
            }
        }
        if (odd == 0)
            cout << -1 << "\n";
        else if (odd % 2 == 0)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}