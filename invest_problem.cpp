#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x,y,z;
    cin>>t;
    while(t--)
    {   cin>>x>>y;
        z = y * 2;
        if (z <= x)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

    }
    
    return 0;
}