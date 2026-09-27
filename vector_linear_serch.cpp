#include <bits/stdc++.h>
using namespace std;

int linear_serch(vector <int>& nums)
{
    int target, size = nums.size();
    cout << "Enter the target:";
    cin >> target;
    for(int i = 0; i < size;i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector <int> vec;
    cout << "Enter the vector size:";
    int n;
    cin >> n;
    cout << "Enter " << n << " vector's values with seperate spaces:";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vec.push_back(value);
    }
    int index = linear_serch(vec);
    cout << "The targeted index:" << index << "\n";
    return 0;
}