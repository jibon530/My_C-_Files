#include <bits/stdc++.h>
using namespace std;

vector <int> product(vector <int>& nums, int size)
{
    vector <int> ans(size,1);
    vector <int> suf(size,1);
    for(int i = 1; i < size; i++)
    {
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;
    for(int i = size-2; i >= 0; i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    return ans;
}

int main()
{
    int t;
    cout << "Enter the test case number:";
    cin >> t;
    while(t--)
    {
    cout << "You still has " << t << " test case.\n";
    cout << "Enter the size of vector:";
    int n;
    cin >> n;
    vector <int> vect;
    cout << "Enter " << n << " vector's value with seperate spaces:";
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vect.push_back(value);
    }
    vector <int> new_product = product(vect,n);
    for(int i = 0; i < n; i++)
    {
        cout << new_product[i] << " ";
    }
    cout << "\n";
    }
    return 0;
}