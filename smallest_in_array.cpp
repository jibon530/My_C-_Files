#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the array size: ";
    int n;
    cin >> n;
    double nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    double smallest = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    cout << "The smallest value is: " << smallest << "\n";
    return 0;
}