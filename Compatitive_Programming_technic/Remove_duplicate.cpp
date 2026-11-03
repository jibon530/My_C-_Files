#include <bits/stdc++.h>
using namespace std;
int duplicate_value(vector <int>& num,int n)
{
    int start = 0;
    for(int i = 1; i < n; i++)
    {
        if(num[i] != num[start])
        {
            start++;
            num[start] = num[i];
        }
    }
    return start +1;
}
int main()
{
    int t;
    cout << "Enter test case number:";
    cin >> t;
    while(t--)
    {
        cout << "Enter Array size:";
        int n;
        cin >> n;
        cout << "Enter " << n << " Array's value with seperate spaces:";
        vector <int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << "Duplicate value count = " << duplicate_value(v,n) << '\n';
    }
    return 0;
}