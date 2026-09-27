#include <bits/stdc++.h>
using namespace std;
int n,r,f,i,a,b,c,x,ans,p,q;
int fact(int z)
{
    f = 1;
    for (i = 1; i <= z; i++)
    {
        f *= i;
    }
    return f;
}
int nCr(int n, int r)
{
    a = fact(n);
    b = fact(r);
    c = fact((n-r));
    x = b * c;
    ans = a / x;
    return ans;
}
int main ()
{
    cout << "Enter the n & r with space:";
    cin >> p >> q;
    cout << "The nCr bionomal is:" << nCr(p,q) << "\n";
    return 0;    
}