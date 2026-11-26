#include <bits/stdc++.h>
using namespace std;
pair<int,int> Solution(vector<int>& arr,int tar)
{
    unordered_map<int,int> m;
    pair<int,int> p;
    for(int i = 0; i < arr.size(); i++)
    {
        int fst = arr[i];
        int sec = tar - fst;
        if(m.find(sec) != m.end())
        {
            p = {i,m[sec]};
            break;
        }
        m[fst] = i;
    }
    return p;
}
signed main()
{
    vector <int> v;
    cout << "Enter the number of element = ";
    int n; cin >> n;
    for(int i = 0; i <  n; i++)
    {
        int val; cin >> val;
        v.emplace_back(val);
    }
    cout << "Now Enter the Targeted Sum = ";
    int tg; cin >> tg;
    auto ans = Solution(v,tg);
    cout << "The Indexes are = " << ans.second << ' ' << ans.first << '\n';
    return 0;
}