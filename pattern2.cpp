// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int i,j,n,num = 1;//(num = 1), because of continuous pattern.
//     cin >> n;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n;j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// For Charecter 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n;//(n+1), because of continuous pattern.
    char ch = 'A';
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n;j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}