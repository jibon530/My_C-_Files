#include <bits/stdc++.h>
using namespace std;

void revers(int arr[], int sz)
{
    int start = 0, end = sz-1;
    while ( start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reverse Array..\n";
    for( int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    cout << "Enter the array size:";
    int n; 
    cin >> n;
    int nums[n];
    for ( int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int size = sizeof(nums) / sizeof(int);
    cout << "Current array..\n";
    for ( int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
    revers(nums, size);
    return 0;
}