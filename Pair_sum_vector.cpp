#include <bits/stdc++.h>
using namespace std;

vector<int> pair_sum(vector <int>& nums)
{
    vector <int> ans;
    int size = nums.size(),target;
    cout << "Enter the targeted pair sum:";
    cin >> target;
    int i = 0, j = size-1;
    while (i < j)
    {
        int pair_sum = (nums[i] + nums[j]);
        if (pair_sum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(pair_sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
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
    vector <int> new_vector = pair_sum(vec);
    cout << "The index are: ";
    for (int i = 0; i < 2; i++)
    {
        cout << new_vector[i] << " ";
    }
    cout << "\n";
    return 0;
}