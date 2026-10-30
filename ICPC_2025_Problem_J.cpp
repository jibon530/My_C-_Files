#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        bool invalid = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0') cnt++;
            else
            {
                if (i + 1 == s.size())
                {
                    invalid = true;
                    break;
                }
                if (s[i + 1] == '0') break;
                else
                {
                    cnt++;
                    i++;
                }
            }
        }
        if (invalid) cout << "INVALID\n";
        else cout << cnt << '\n';
    }
    return 0;
}