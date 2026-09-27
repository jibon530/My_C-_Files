/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,f1=0,f2=1,fibo;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        fibo = f1 + f2;
        f1 = f2;
        f2 = fibo;
        cout<<fibo<<"\n";
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,i,j,num[105],sum = 0;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a;
        num[i] = a;
    }
    for(j = 0; j < n; j++)
    {
        cout<<num[j]<<" ";
    }
    for(j = 0; j < n; j++)
    {
        sum = sum + num[j];
    }
    cout<<"\n"<<sum<<"\n";
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,fibo[105],t,m;
    fibo[0] = 0;
    fibo[1] = 1;
    cin>>n;
    for(i = 2; i <= n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int j = 0; j <= n;j++)
    {
        cout<<fibo[j]<<"\n";
    }
    cin>>t;
    while(t--)
    {
        cin>>m;
        cout<<fibo[m-1]<<"\n";
    }
    return 0;
}