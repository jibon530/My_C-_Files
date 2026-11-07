#include <bits/stdc++.h>
using namespace std;
long long fibo(long long n,vector <long long>& dp)
{
    //Base Case
    if(n == 0 || n == 1) return n;
    //Cheak if already present
    if(dp[n] != -1) return dp[n];
    //Add in Vector
    dp[n] = fibo(n-1,dp) + fibo(n-2,dp);
    //Return
    return dp[n];
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long>dp(n+1,-1);
    cout << fibo(n-1,dp) << '\n';
    return 0;
}