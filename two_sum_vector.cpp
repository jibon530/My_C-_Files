#include <bits/stdc++.h>
using namespace std;
void two_sum_vector(vector <int>& nums, int& tg)
{
    int size = nums.size();
    for(int st = 0; st < size; st++)
    {
        for(int ed = st+1; ed < size; ed++)
        {
            if((nums[st] + nums[ed]) == tg)
            {
                // return {st, ed};
                cout << "The index are:" << st <<  " " << ed << "\n";
                return;
            }
        }
    }
    // return {-1, -1};
    cout << "The index are: -1 -1\n";
}

int main()
{
    vector <int> vec;
    int n,target;
    cout << "Enter the vector size:";
    cin >> n;
    cout << "Enter " << n << " vector's value with seprcate spaces:";
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vec.push_back(value);
    }
    cout << "Enter the targeted sum: ";
    cin >> target;
    two_sum_vector(vec,target);
    return 0;
}