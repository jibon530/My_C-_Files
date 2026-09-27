#include <bits/stdc++.h>
using namespace std;

int single_num( vector <int>& num)
{
    int ans = 0;
    for( int val : num)
    {
        ans = ans ^ val;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter how many input you will gives:";
    cin >> n;
    vector <int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    // int ans = 0;
    // for( int val : vec)
    // {
    //     ans = ans ^ val;
    // }
    cout << single_num(vec) << "\n";
    return 0;
}