#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}
void solution(int a, int b)
{
    int gd = gcd(a,b);
    cout << "The GCD is = " << gd << '\n';
    cout << "The LCM is = " << (a*b)/gd << '\n';
}
signed main()
{
    int a,b; cin >> a >> b;
    solution(a,b);
    return 0;
}