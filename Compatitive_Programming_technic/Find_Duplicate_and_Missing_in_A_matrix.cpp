#include <bits/stdc++.h>
using namespace std;
pair<int,int> FindAB(vector<vector<int>>& V,int Ac_sum)
{
    unordered_set<int> st;
    pair<int,int> p;
    int n = V.size(),a,b;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; j++)
        {
            if(st.find(V[i][j]) != st.end())
            {
                a = V[i][j];
                break;
            }
            st.emplace(V[i][j]);
        }
    }
    int Ex_sum = ((n*n) * ((n*n)+1)) / 2;
    b = (Ex_sum - (Ac_sum-a));
    p = {a,b};
    return p;
}
signed main()
{
    cout << "Enter the Matrix Size:";
    int n; cin >> n;
    vector<vector<int>> matrix(n,vector<int>(n));
    cout << "Enter the matrix with seperate spaces:";
    int actual_sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            actual_sum += matrix[i][j];
        }
    }
    pair<int,int> pp = FindAB(matrix,actual_sum);

    cout << "The Missing value is = " << pp.second << '\n';
    cout << "The Duplicate value is = " << pp.first << '\n';
    return 0;
}