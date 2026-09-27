#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string name,n1;
    cin>>name;
    n1 = name;
    n = name.size();
    for( char & x: name)
    {
        x = tolower(x);
    }
    if (name[0] == 'p' && name[n-1] == 'a' ||'u')
    {
        cout<<"Yes Jibon,You can merry with "<<n1<<"...\n"<<n1<<" is prefect for you..\n";
    }
    else
    {
        cout<<"No Jibon, Maybe "<<n1<<" is not for you..\n";
    }
    return 0;
}