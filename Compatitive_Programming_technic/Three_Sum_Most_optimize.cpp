#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ThreeSum(vector<int>& v,int n)
{
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    for(int i = 0; i < n-2; ++i)
    {
        if(i > 0 && v[i] == v[i-1]) continue;
        int j = i + 1, k = n - 1;
        while(j < k)
        {
            int sum = v[i] + v[j] + v[k];
            if(sum < 0) j++;
            else if(sum > 0) k--;
            else{
                ans.push_back({v[i],v[j],v[k]});
                j++; k--;
                while(j < k && v[j] == v[j-1]) j++;
            }
        }
    }
    return ans;
}
signed main()
{
    cout << "Enter the Array Size = ";
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<vector<int>> solution = ThreeSum(v,n);
    for(auto val : solution)
    {
        for(auto x : val){
            cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}