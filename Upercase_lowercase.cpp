#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(char & x : s)
    {
        x = tolower(x);
    }
    cout << s << "\n";
    return 0;
}