#include <iostream>
#include <vector>
using namespace std;
pair<int,vector<int>> solution(int n)
{
    vector<bool> v(n+1,true);
    vector<int>prime;
    for(int i = 2; i < n; i++)
    {
        if(v[i])
        {
            prime.emplace_back(i);
            for(int j = i*2; j < n; j += i) v[j] = false;
        }
    }
    int ans = prime.size();
    return {ans,prime};

}
signed main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n; cin >> n;
    auto solve = solution(n);
    cout << "Prime count = " << solve.first << '\n';
    // for(auto x: solve.second)
    // {
    //     cout << x << ' ';
    // }
    cout << "Now Enter the test case number:";
    int t; cin >> t;
    while(t--)
    {
        cout << "Enter the Position:";
        int p; cin >> p;
        cout << solve.second[p-1] << '\n';
    }
    // cout << '\n';
    return 0;
}