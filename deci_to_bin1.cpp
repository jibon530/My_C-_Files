#include <bits/stdc++.h>
using namespace std;
int deci_bin(int deci)
{
    int ans = 0, power = 1,rem;
    while(deci > 0)
    {
        rem = deci % 2;
        deci /= 2;
        ans += (rem * power);
        power *= 10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        cout << "Decimal = " << num << " Binarry = " << deci_bin(num) << "\n";
    }
    return 0;
}