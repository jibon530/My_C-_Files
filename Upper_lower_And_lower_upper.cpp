#include <bits/stdc++.h>
using namespace std;

string Ulotpalot_Cimcim(string & str)
{
    for(char & x : str)
    {
        if(islower(x))
            x = toupper(x);
        else if(isupper(x))
            x = tolower(x);
    }
    return str;
}

int main()
{
    string s;
    getline(cin,s);
    // for(char & x : s)
    // {
    //     if(islower(x))
    //         x = toupper(x);
    //     else if(isupper(x))
    //         x = tolower(x);
    // }
    cout << "Your Input\t: " <<  s << "\n" << "Ulto\t\t: " << Ulotpalot_Cimcim(s) << "\n";
    return 0;
}