
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    bool prime = true;
    cin>>n;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime == true)
    {
        cout<<n<<" Prime Number..\n";
    }
    else
    {
        cout<<n<<" Not Prime Number..\n";
    }
    return 0;
}
*/


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,j;
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
            cout<<j<<" is Prime..\n";
        }
        else
        {
            cout<<j<<" is Not Prime..\n";
        }
    }
    
}




#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,j,k=0,l=0,P[10000],NP[10000];
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
            P[k]=j;
            k++;
            //cout<<j<<" is Prime..\n";
        }
        else
        {
            NP[l]=j;
            l++;
            //cout<<j<<" is Not Prime..\n";
        }
    }
    for (i=0;i<k;i++)
       cout<<"Primes: "<<P[i]<<" "<<"\n"; 
    cout<<"\n";
    for (i=0;i<l;i++)
       cout<<"Not Primes: "<<NP[i]<<" "<<"\n"; 
}


#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int n,i,j,ans=1;
    string num;
    cin>>n>>num;
    j = num.length();
    for(i = n; i > 0; i -= j)
    {
        ans = ans * i;
    }
    cout<<ans<<"\n";
    return 0;
}
*/
