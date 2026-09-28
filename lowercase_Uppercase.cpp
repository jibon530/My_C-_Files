#include <bits/stdc++.h>
using namespace std;
string Upper(string & s)
{
    for(char & x : s)
    {
        x = toupper(x);
    }
    return s;
}
int main()
{
    string s;
    getline(cin,s);
    
    // for(char & x : s)
    // {
    //     x = toupper(x);
    // }
    // cout << s << "\n";

    cout << "Your Input: " << s << "\nUppercase: " << Upper(s) << "\n";
    return 0;
}