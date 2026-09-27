#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n, answer;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if (n >= 67)
        {
            cout<<67<<"\n";
        }
        else
        {
            answer = n + 1;
            cout<<answer<<"\n";
        }
    }
    return 0;
}