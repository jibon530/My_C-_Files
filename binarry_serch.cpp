#include <bits/stdc++.h>
using namespace std;

int binarry_search(vector <int>& nums, int tg)
{
    int st = 0, n = nums.size() - 1;
    while(st <= n)
    {
        int mid = st + ((n - st) / 2);
        if(tg > nums[mid])
        {
            st = mid + 1;
        }
        else if(tg < nums[mid])
        {
            n = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector <int> vect;
    cout << "Enter the vector size:";
    int n,target;
    cin >> n;
    cout << "Enter " << n << " vector's value with seperate spaces:";
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vect.push_back(value);
    }
    sort(vect.begin(), vect.end());
    for(int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }
    cout << "\nEnter the targeted value:";
    cin >> target;

    cout << "The targeted index is:" << binarry_search(vect, target) << "\n";

    return 0;
}