#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,add,root;
    int power, mul = 1;
    cin >> t;
    while(t--)
    {
        cin >> add;
        mul *= add;
    }
    root = sqrt(mul);
    power = root * root;
    if ( power == mul && mul != 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}