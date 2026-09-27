#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,i,add;
    cin>>t;
    while(t--)
    {
        cin>>n;
        add = 1;
        for(i = 1;i <= n; i++)
        {
            add = add * i;
        }
        cout<<"The addition is: "<<add<<"\n";
    }
    return 0;
}