#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numbers[505],num,i,j,n;
    cout<<"Enter how many numbers you want to enter:"; cin>>n;
    for(i = 0; i < n;i++)
    {
        cin>>numbers[i];
    }
    for( j = n-1; j >= 0; j--)
    {
        cout<<numbers[j]<<" ";
    }
    cout<<"\n";
    return 0;
}