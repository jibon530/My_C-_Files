#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string num;
    cin >> num;
    n = num.size();
    if (num[0] == 'c' || num[n - 1] == 'f')
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
} 