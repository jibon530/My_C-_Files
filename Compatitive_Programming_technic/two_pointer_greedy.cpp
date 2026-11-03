#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<int, int> twosum(vector<int>& num, int target, int n)
{
    int i = 0, j = n - 1;
    while(i < j)
    {
        int summ = num[i] + num[j];

        if(summ == target)
            return {i + 1, j + 1};
        else if(summ < target) i++;
        else j--;
    }
    return {-1, -1};
}

int main()
{
    cout << "Enter test case number: ";
    int t;
    cin >> t;
    while(t--)
    {
        cout << "Enter Sorted Array size: ";
        int n;
        cin >> n;
        vector<int> v(n);
        cout << "Enter " << n << " Array's value with seperate spaces:";
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << "Enter the targeted array sum: ";
        int target;
        cin >> target;
        pair<int, int> ans = twosum(v, target, n);
        cout << "The indices are: " << ans.first << " " << ans.second << '\n';
    }
    return 0;
}