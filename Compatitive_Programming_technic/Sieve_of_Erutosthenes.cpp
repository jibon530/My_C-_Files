#include <iostream>
#include <vector>
using namespace std;
int solution(int n)
{
    if(n < 2) return false;
    vector<bool> v(n+1,true);
    int ans = 0;
    for(int i = 2; i < n; i++)
    {
        if(v[i])
        {
            ans++;
            for(int j = i*2; j < n; j += i) v[j] = false;
        }
    }
    return ans;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    cout << "Prime count:" << solution(n) << '\n';
    return 0;
}