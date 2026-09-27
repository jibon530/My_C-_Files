#include <bits/stdc++.h>
using namespace std;
int binary_to_deci(int bin)
{   
    int ans = 0, pow = 1,rem;
    while (bin > 0)
    {
        rem = bin % 10;
        ans += (rem * pow);
        bin /= 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    cout << "Binary = " << num << ", Decimal = " << binary_to_deci(num) << "\n";
    return 0;
}