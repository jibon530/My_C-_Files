#include <bits/stdc++.h>
using namespace std;

int single_num( vector <int>& num)
{
    int st = 0, ed = 0;;
    for( int val : num)
    {   
        st = (st ^ val) & ~ed;
        ed = (ed ^ val) & ~st;
    }
    return st;
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