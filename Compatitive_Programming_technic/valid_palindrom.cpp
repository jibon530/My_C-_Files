#include <iostream>
#include <string>
using namespace std;
bool isaplhanum(char ch)
{
    char chch = tolower(ch);
    if((ch >= '0' && ch <= '9') || (chch >= 'a' && chch <= 'z')) return true;
    else return false;
}
int main()
{
    cout << "Enter the string:";
    string s; getline(cin,s);
    int st = 0, end = s.length()-1;
    bool ok = true;
    while(st < end)
    {
        if(!isaplhanum(s[st]))
        {
            st++; continue;
        } 
        if(!isaplhanum(s[end]))
        {
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end]))
        {
            ok = false;
            break;
        }
        st++; end--;
    }
    if(ok) cout << "Palindrom\n";
    else cout << "Not palindrom\n";
    return 0;
}