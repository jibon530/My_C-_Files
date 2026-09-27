#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x,y,z,i;
    float d,ans;
    cin>>t;
    while(t--)
    {   ans = 0;
        cin>>x>>y;
        while(x > y)
        {
            z = ceil((float)x / 10);
            ans += z;
            x--;
        }
        cout<<ans<<"\n";
    }
    return 0;
}