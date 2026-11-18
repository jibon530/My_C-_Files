#include <iostream>
using namespace std;
int main()
{
    //Remove all the Occurrenccss
    cout << "Enter the string:";
    string s; cin >> s;
    cout << "Now Enter the part:";
    string part; cin >> part;
    int len2 = part.length();
    while(s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),len2);
    }
    cout << s << '\n';

    return  0;
}