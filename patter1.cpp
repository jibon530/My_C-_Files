// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int i,j,n;
//     cin >> n;
//     for(i = 0; i <= n-1; i++) //Outer loop.For n-th line.Iteration start from 0, because of future. Like array.Or (i = 0;i < n;i++).
//     {   for (j = 0; j <= n-1; j++) // Inner loop.For print. Or (j = 0; j < n;j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

//Patter with ABCD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n;
    cin >> n;
    for (i = 0; i < n ; i++)
    {   
        char ch = 'A';
        for (j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << "\n";
    }
    return 0;
}