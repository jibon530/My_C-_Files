#include <bits/stdc++.h>
using namespace std;
void print_divisor(int n)
{
    vector <int> divisor;
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            divisor.emplace_back(i);

            if(i != (n/i))
            {
                divisor.emplace_back(n/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());
    for(auto & val: divisor)
    {
        cout << val << " ";
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        print_divisor(num);
    }
    return 0;
}