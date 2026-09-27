#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num[105],decimal,base,j,i=0;
    cin>>decimal>>base;
    while (decimal > 0)
    {
        num[i] = decimal % base;
        decimal = decimal / base;
        i++;
    }
    for(j = i-1;j >= 0; j--)
    {
        if(num[j] >= 10)
        {
            cout<<(char)('A' + (num[j] % 10));
        }
        else
        {
            cout<<num[j];
        }
    }
    cout<<"\n";
    return 0;
}