#include <iostream>
using namespace std;
int main()
{
    int b,h,c,b1,h_c;
    cin >> b >> h >> c;
    b1 = b / 2;
    h_c = h + c;
    if(b1 == h_c)
    {
        cout << b1 << "\n";
    }
    else if (h_c < b1)
    {
        cout << h_c << "\n";
    }
    else
        cout << b1 << "\n";
    return 0;
}