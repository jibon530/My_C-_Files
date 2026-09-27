#include <bits/stdc++.h>
using namespace std;
void two_sum(vector <int>& num, int& st,int& ed)
{   
    int target,size = num.size();
    cout << "Enter the target:";
    cin >> target;
    while(ed < size)
    {
        if ((num[st] + num[ed] == target))
        {
            return;
        }
        st++;
        ed++;
    }
    st = -1;
    ed = -1;
}
int main ()
{
    int n;
    cout << "Enter the vector size: ";
    cin >> n;
    vector <int> vec;
    cout << "Enter " << n << " vector's value with seperate spaces:";
    for(int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        vec.push_back(v);
    }
    int st = 0, ed = 1;
    two_sum(vec, st,ed);
    cout << "The index are:" << st << " " << ed << "\n";
    return 0;
}