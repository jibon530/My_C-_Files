#include <iostream>
using namespace std;
void palindrom(int n)
{
    int n1 = n,reverse = 0,rem;
    while(n > 0)
    {
        rem = n % 10;
        reverse = (reverse * 10) + rem;
        n /= 10;
    }
    if(n1 == reverse)
    {
        cout << "Palindrom \n";
    }
    else 
        cout << "Not Palindrom \n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        palindrom(num);
    }
    return 0;
}