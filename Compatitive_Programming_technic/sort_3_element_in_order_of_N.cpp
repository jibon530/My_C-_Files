#include <bits/stdc++.h>
using namespace std;
vector <int> three_sort(vector<int>& arr)
{
    int n = arr.size();
    int left = 0, right = n-1, i = 0;
    while(i <= right)
    {
        if(arr[i] == 0)
        {
            swap(arr[i],arr[left]);
            left++;
            i++;
        }
        else if(arr[i] == 2)
        {
            swap(arr[i],arr[right]);
            right--;
        }
        else i++;
    }
    return arr;
}
int main()
{
    vector <int> v = {1,0,2,2,1,0,1,0,0,2,1};
    vector <int> ans = three_sort(v);
    for(int val: ans)
    {
        cout << val << " ";
    }
    cout << '\n';
    return 0;
}