#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    for(int st = 0; st < n; st++)
    {
        for(int ed = st; ed < n; ed++)
        {
            for(int i = st; i <= ed; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << "\n";
    }
    return 0;
}