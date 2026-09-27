#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    bool prime;
    // cout << "Enter a number:" << flush;
    cin >> n;
    prime = true;
    if (n == 2)
    {
        prime = true;
    }
    else if(n < 2)
    {
        prime = false;
    }
    else if(n % 2 == 0)
    {
        prime = false;
    }
    else
    {
    for (i = 3; i*i <= n; i+=2)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    }
    if (prime == true)
    {
        cout << n << " is a prime number.\n";
    }
    else
    {
        cout << n << " is not prime number.\n";
        if (n < 2)
        {
            cout << "The number is a zero,one or negative number.\n";
        }
    }
    return 0;
}