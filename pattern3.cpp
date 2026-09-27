// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int i,j,n;
//     cin >> n;
//     for (i = 0; i < n; i++)
//     {
//         for(j = 0; j < i+1; j++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n;
    //char ch = 'A'; //For Continuous Pattern.
    cin >> n;
    for (i = 0; i < n; i++)
    {   char ch = 'A'; // For restart Pattern.
        for(j = 0; j < i+1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}