#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<int> count(n + 1, 0);

    for (int i = 1; i <= n; i++) 
    {
        for (int j = i; j <= n; j += i) 
        {
            count[j]++;
        }
    }

    for (int j = 1; j <= n; j++) 
    {
        cout << count[j] << " ";
    }
    cout << "\n";
    return 0;
}
