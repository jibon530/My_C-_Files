/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    long long pr[1005];
    pr[0]=2;
    pr[1]= 3;
    cin>>n;
    for(i = 2; i < n; i++)
    {
        bool prime = true;
        for(j = 2; j <= sqrt(i);j++)
        {
            if(i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime == true)
        {
            pr[i]=j;
        }
    }
    for(i = 0; i<= n;i++)
    {
        cout<<pr[i]<<"\n";
    }
    return 0;
}
    

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,j,pr[105],k;
    cin>>n;
    for(j = 2; j <= n; j++)
    {
        bool prime = true;
        for(i = 2; i <= sqrt(j); i++)
        {
            if(j % i == 0)
            {
                prime = false;
                break;
            }
       }
        if (prime == true)
        {
            for(k = 0;k <= n;k++)
            {
                pr[k] = j;
            }
        }
        for(int l = 0; l <= n; l++)
        {
            cout<<pr[l]<<"\n";
        }
        /* else
        {
            cout<<j<<" is Not Prime..\n";
        }
            
    }
    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, pr[10005], k = 0; 
    cin >> n;

    for(j = 2; j <= n; j++)
    {
        bool prime = true;
        for(i = 2; i <= sqrt(j); i++)
        {
            if(j % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime == true)
        {
            pr[k] = j;
            k++; 
        }
    }
    int t,m;
    cin>>t;
    while(t--)
    {
        cin>>m;
        cout<<pr[m-1]<<"\n";
    }
    
    return 0;
}