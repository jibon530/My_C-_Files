// #include <iostream>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     int i,j,n;
//     char ch = 'A';
//     cin >> n;
//     for (i = 0; i < n; i++)
//     {
//         //For spaces
//         for (j = 0; j < i;j++)
//         {
//             cout <<" ";
//         }
//         //For numbers
//         for (j = 0; j < n - i; j++)
//         {
//             cout << i+1;
//         }
//         cout << "\n";
//     }
//     return 0;
// }
//For charecter 
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,j,n;
    char ch = 'A';
    cin >> n;
    for (i = 0; i < n; i++)
    {
        //For spaces
        for (j = 0; j < i;j++)
        {
            cout <<" ";
        }
        //For numbers
        for (j = 0; j < n - i; j++)
        {
            cout << char(ch + i);
        }
        cout << "\n";
    }
    return 0;
}