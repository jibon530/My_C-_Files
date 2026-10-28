#include <iostream>
using namespace std;
int findpow(int a,int b,int mod)
{
    if(b == 0) return 1;
    if(b == 1) return a;
    int x = findpow(a,b/2,mod)%mod;
    int ans = 0;
    if(b % 2 == 1)
    {
        ans = (x%mod*x%mod)%mod;
        ans = (ans%mod * a %mod)%mod;
    }
    else ans = (x%mod*x%mod)%mod;
    return ans;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int mod = 25;
    cout << findpow(a,b,mod) << "\n";
    return 0;
}