#include <bits/stdc++.h>
using namespace std;

int find_1_And_0 (vector <int>& nums)
{
    int count = 0, max_count = 0,size = nums.size();
    for(int i = 0; i < size; i++)
    {
        if(nums[i] == 1)
        {
            count++;
            max_count = max(max_count,count);
        }
        else
        {
            count = 0;
        }
    }
    return max_count;
}

int main()
{
    int t;
    cout << "Enter the test case number:";
    cin >> t;
    while(t--)
    {
    int n;
    cout << "Ente the array size:";
    cin >> n;
    cout << "Enter " << n << " 1 or 0 with seperate spaces:";
    vector< int > vect;
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vect.emplace_back(value);
    }
    int max_1 = find_1_And_0(vect);
    cout << "The max 1 repert in sequence: " << max_1 << "\n";
    
    }
    return 0;
}