#include <bits/stdc++.h>
using namespace std;
int main() 
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,x,p,q,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>p>>q;
        z = x * (p - q);
        cout<<z<<"\n";
    }
    return 0;
}