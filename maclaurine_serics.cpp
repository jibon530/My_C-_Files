/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x,n,sum = 0,j,fact;
    int i;
    cin>>x>>n;
    for(i = 0; i <= n; i += 2)
    {
        fact = 1;
       for(j = 1; j <= i; j++)
       {
        fact *= j;
       }
       if ( i % 4 == 0)
       {
            sum = sum + (pow(x,i)/fact);
       }
       else
       {
            sum = sum - (pow(x,i)/fact);
       }
    }
    cout<<"The answere is: "<<sum<<"\n";
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,n,i,j;
    double ps = 1, ns = 0,ans;
    cin>>x>>n;
    for(i = 2; i <= n; i+= 2)
    {
        double fact = 1;
        for(j = 1; j <= i;j++)
        {
            fact *= j;
        }
        double term = pow(x,i)/ fact;
        if (i % 4 == 0)
        {
            ps += term;
        }
        else
        {
            ns += term;
        }
    }
    ans = (ps - ns);
    cout<<"The answere is: "<<ans<<"\n";
    return 0;
}