#include <iostream>
#include <vector>
using namespace std;

void solve() 
{
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<bool> book(n + 1, false);
    for (int i = 0; i < m; i++) 
    {
        int seat;
        cin >> seat;
        book[seat] = true;
    }
    
    int total_seat = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (book[i] == false) 
        {
            cout << i << " ";
            total_seat++;
            if (total_seat == k) 
            {
                break;
            }
        }
    }
    cout << "\n";
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}