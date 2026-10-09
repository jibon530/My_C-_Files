#include <iostream>
#include <vector>
using namespace std;

int Binarry_search(vector<int> &nums, int x)
{
    int low = 0, high = nums.size() - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == x)
        {
            return mid;
        }
        else if (nums[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout << "Enter test case number:";
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> vect;
        cout << "Enter vector size";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            vect.emplace_back(value);
        }
        cout << "Enter the targeted value:";
        int target;
        cin >> target;
        cout << "The targeted index is: " << Binarry_search(vect, target) << "\n";
    }
    return 0;
}