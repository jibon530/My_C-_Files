#include <bits/stdc++.h>
using namespace std;

int kadans_algorithom(int nums[], int size)
{
    int max_subarray_sum = nums[0],current_sum = 0;
    for(int i = 0; i < size; i++)
    {
        current_sum += nums[i];
        max_subarray_sum = max(max_subarray_sum, current_sum);
        if ( current_sum < 0)
        {
            current_sum = 0;
        }
    }
    return max_subarray_sum;

}

int main()
{
    cout << "Enter the array size:";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " array's value with seperate spaces:";
    for (int i = 0; i  < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The max subarray sum is: " << kadans_algorithom(arr,n) << "\n"; 
    return 0;
}