#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the array size:";
    int n;
    cin >> n;
    double nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int sz = sizeof(nums) / sizeof(double);
    double largest = nums[0];
    for (int i = 0; i < sz; i++)
    {
        if(nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    cout << "The largest numbers is: " << largest << "\n";
    return 0;
}