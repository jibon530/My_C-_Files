#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the array size:";
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // double pi;
    // pi = acos(-1);
    // cout << pi <<endl;
    return 0;
}