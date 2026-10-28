#include <iostream>
using namespace std;
int fact(int n)
{
    if(n == 0) return 1;
    int f = 1;
    for(int i = 1; i <= n;i++)
    {
        f *= i;
    }
    return f;
}
int nCr(int n,int r)
{
    if(r == 0 || r == n) return 1;
    if(r > n) return 0;
    return (fact(n) / (fact(r) * fact(n-r)));
}
int main()
{
    int n,r;
    cin >> n >> r;
    cout << nCr(n,r) << '\n';
    return 0;
}