#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int s; 
    cout << "Enter vector size:";
    cin >> s;
    vector <int> vec(s);
    for (int i = 0; i < s; i++)
    {
        cin >> vec[i];
    }
    int sz = vec.size();

    for(int i = 0; i < sz; i++)
    {
        cout << vec[i] << "\n";
    }
    cout << sz;
    
    return 0;
}