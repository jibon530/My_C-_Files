#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {-2, 3, -1, 5, -6};
    int n = sizeof(arr) / sizeof(int);
    int max_sum = arr[0];
    for(int st = 0; st < n; st++)
    {
        int current_sum = 0;
        for(int ed = st; ed < n; ed++)
        {
            current_sum += arr[ed];
            max_sum = max(current_sum, max_sum);
        }
    }
    cout << "Max subarray sum: " << max_sum << "\n";
    return 0;
}