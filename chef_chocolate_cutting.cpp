#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,nm,div;
        cin >> n >> m;
        nm = n * m;
        div = nm % 2;
        if(div == 0)
        {
            cout << "Yes\n"; 
        }
        else
            cout << "No\n";
    }
    return 0;
}