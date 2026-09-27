/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int lcm,gcd,a,b,c;
    cin>>a>>b;
    lcm = a * b;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    gcd = a;
    lcm = lcm / gcd;
    cout<<"The GCD is:"<<gcd<<" The LCM is:"<<lcm<<"\n";
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,lcm,gcd;
    cin>>a>>b;
    lcm = a * b;
    gcd = std::gcd(a,b);
    lcm = lcm / gcd;
    cout<<"The LCM is:"<<lcm<<" The GCD is:"<<gcd<<"\n";
    return 0;
}