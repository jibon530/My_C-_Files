#include <bits/stdc++.h>
using namespace std;

long long deci_bin(long long decinum)
{
    long long ans = 0, pow = 1;
    while (decinum > 0)
    {
        long long rem = decinum % 2;
        decinum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main()
{
    // long long num;
    // cin >> num;
    // cout << "Decimal = " << num << ", Binary = " << deci_bin(num) << ". \n";
    for (long long i = 1; i <= 521901; i++)
    {
        // cout << i << "\n";
        cout << "Decimal = " << i << ", Binary = " << deci_bin(i) << ". \n";
    }
    return 0;
}