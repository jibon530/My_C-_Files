#include <iostream>
using namespace std;
int findpow(int a,int b)
{
    if(b == 0) return 1;
    if(b == 1) return a;
    int x = findpow(a,b/2);
    int ans = 0;
    if(b % 2 == 1) ans = x*x*a;
    else ans = x*x;
    return ans;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << findpow(a,b) << "\n";
    return 0;
}