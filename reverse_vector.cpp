#include <bits/stdc++.h>
using namespace std;
void reverse_vector(vector <int>& nums, int sz)
{
    int st = 0, ed = sz - 1;
    while( st < ed)
    {
        swap(nums[st], nums[ed]);
        st++;
        ed--;
    }
    cout << "Reverse Vector\n";
    for (int i = 0; i < sz; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
    
}

int main()
{
    vector <int> vec;
    cout << "Enter the vector size:";
    int n;
    cin >> n;
    cout << "Enter " << n << " vector's value with seperate spaces:";
    for( int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vec.push_back(value);
    }
    cout << "Current Vector\n";
    int size = vec.size();
    for(int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
    reverse_vector(vec, size);
    return 0;
}