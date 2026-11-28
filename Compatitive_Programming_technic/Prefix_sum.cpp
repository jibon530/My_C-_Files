#include <iostream>
#include <vector>
using namespace std;
signed main()
{
    cout << "Enter the array size:";
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i > 0) v[i] += v[i-1];
    }
    cout << "Enter thr range:";

    int a,b; cin >> a >> b;
    if(a == 0){
        int sumation = v[b];
        cout << sumation << '\n';
    }else{
        int sumation = v[b] - v[a-1];
        cout << sumation << '\n';
    }
    return 0;
}