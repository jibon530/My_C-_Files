/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum = 0, k = 1;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            sum = sum + k;
            k++;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,even = 0,odd = 0;
    cin>>n;
    for (i = 1; i <= n; i += 2)
    {
        odd = odd + i;
    }
    for (j = 2; j <= n; j += 2)
    {
        even = even + j;
    }
    int add = odd - even;
    
    cout<<add<<"\n";
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum = 0;
    cin>>n;
    for(i = 1; i <= n; i ++)
    {
        sum = sum + (i * (n-i+1));
    }
    cout<<sum<<"\n";
    return 0;
}