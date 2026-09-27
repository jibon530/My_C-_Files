#include <bits/stdc++.h>
using namespace std;
int main()
{
    int binary,x,decimal=0,i=0,rem;
    cin>>binary>>x;
    while(binary != 0)
    {
        rem = binary % 10;
        decimal = decimal + (rem * pow(x,i));
        binary = binary / 10;
        i++;
    }
    cout<<decimal<<"\n";
    return 0;
}