#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,i = 1,count;
    cin>>n;
    count = 0;
    while(i <= n)
    {
        cin>>a>>b>>c;
        if ((a + b + c) > 1)
        {
            count = count + 1;
        }
    i++;
    }
    cout<<count<<"\n";
    return 0;
}