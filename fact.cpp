/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,fact;
    cin>>n;
    fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<<fact<<"\n";
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    bool prime = false;
    cin>>n;
    for (i = 2;i < n; i++)
    {
        if (n % i == 0)
        {
            prime = true;
            break;
        }
        
    }
    if (prime == true)
    {
        cout<<"Not Prime.."<<"\n";
    }
    else
    {
        cout<<"Prime..\n";
    }
    return 0;
}
