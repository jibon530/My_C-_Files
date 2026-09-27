#include <bits/stdc++.h>
using namespace std;
int linear_serch(int arr[], int size)
{   int value;
    cout << "Enter the value which you want to serch: ";
    cin >> value;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main()
{   cout << "Enter the array size:";
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int sz = sizeof(nums) / sizeof(int);
    int index = linear_serch(nums,sz);
    cout << "The index number is: " << index << "\n";
    return 0;
}