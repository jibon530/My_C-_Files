#include <bits/stdc++.h>
using namespace std;
int bin_deci(int bin)
{
    int ans = 0, power = 1,rem;
    while(bin > 0)
    {
        rem = bin % 10;
        ans += (rem * power);
        bin /= 10;
        power *= 2;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        cout << "Binarry = " << num << " Decimal = " << bin_deci(num) << "\n";
    }
    return 0;
}