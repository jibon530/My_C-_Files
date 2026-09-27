#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, count, num;
    long long sum_odd, sum_prime;
    cin >> n;
    sum_odd = 1LL * n * n;
    sum_prime = 0;
    count = 0;
    num = 2;
    while (count < n)
    {
        if (isPrime(num))
        {
            sum_prime += num;
            count++;
        }
        num++;
    }
    cout << abs(sum_odd - sum_prime) << "\n";
    return 0;
}