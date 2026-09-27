#include <bits/stdc++.h>
using namespace std;
int Kadans_Algorithom(vector <int> & nums)
{
    int size = nums.size();
    int max_subarray = nums[0], current_subarray = 0;
    for( int val : nums)
    {
        current_subarray += val;
        max_subarray = max(max_subarray, current_subarray);
        if( current_subarray < 0)
        {
            current_subarray = 0;
        }
    }
    return max_subarray;
}

int main()
{
    vector <int> vec;
    cout << "Enter the vector size:";
    int n;
    cin >> n;
    cout << "Enter " << n << " vector's value with seperate spaces:";
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vec.push_back(value);
    }
    cout << "The Max subarray is: " << Kadans_Algorithom(vec) << "\n";
    return 0;
}