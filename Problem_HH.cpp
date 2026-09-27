#include <bits/stdc++.h>
using namespace std;
struct Student 
{
    int id;
    int count = 0;
    int last_v = -1;
};
bool compare(Student a, Student b) 
{
    if (a.count != b.count)
    {
        return a.count > b.count;
    }
    return a.last_v > b.last_v;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if (!(cin >> n >> k)) return 0;
    unordered_map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++) 
    {
        int id;
        cin >> id;
        mp[id].first++;
        mp[id].second = i;
    }
    vector<Student> st;
    for (auto it : mp) 
    {
        Student s;
        s.id = it.first;
        s.count = it.second.first;
        s.last_v = it.second.second;
        st.push_back(s);
    }
    sort(st.begin(), st.end(), compare);
    for (int i = 0; i < k; i++) 
    {
        cout << st[i].id << (i == k - 1 ? "" : " ");
    }
    cout << "\n";
    return 0;
}