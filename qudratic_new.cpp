#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m,u,x1,x2;
    cin>>a>>b>>c;
    m = -b / (2 * a);
    d = pow(m,2) - (c/a);
    if (d < 0)
    cout<<"Sorry..! The roots are not posible\n";
    else if (d == 0)
    cout<<"The root is:"<<d<<"\n";
    else
    {
        u = sqrt(d);
        x1 = m - u;
        x2 = m + u;
        cout<<"The roots are real and equal:"<<x1<<" "<<x2<<"\n";
    }
}