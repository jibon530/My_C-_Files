#include <bits/stdc++.h>
using namespace std;
void Pair_sum(vector <int>& nums, int size)
{
    cout << "Enter the targeted sum:";
    int i = 0, j = size-1, target;
    vector <int> ans;
    cin >> target;
    while (i < j)
    {
        int pair_sum = nums[i] + nums[j];
        if (pair_sum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else if(pair_sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    int sz = ans.size();
    if (sz == 2)
    {
        cout << "The index are: ";
        for(int i = 0; i < sz; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";

    }
    else
    {
        cout << "Sorry..!There is no any index in the vector..\n";
    }
}

int main()
{
    vector <int> vect;
    cout << "Enter the vector size:";
    int n;
    cin >> n;
    cout << "Enter " << n << " Vector's value with seperate spaces:";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vect.push_back(value);
    }

    sort(vect.begin(), vect.end());

    cout << "The sorted vector is: ";

    for(int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << "\n";

    Pair_sum(vect,n);

    return 0;
}