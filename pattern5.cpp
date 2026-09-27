// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int i,j,n,num;
//     cin >> n;
//     for(i = 0; i < n; i++){
//         num = 1;
//         for (j = 0; j < i+1;j++)
//         {
//             cout << num <<" ";
//             num++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

//For chareccter

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,n;
    cin >> n;
    for(i = 0; i < n; i++){
        char ch = 'A';
        for (j = 0; j < i+1;j++)
        {
            cout << ch <<" ";
            ch++;
        }
        cout << "\n";
    }
    return 0;
}