// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,k, array[10000]={7,11,13,17,23},i,j;
//     cin>>n;
//     int size = 5;
//     for (i = 5; i < n+5; i++)
//     {
//         cin>>array[i];
//         size += 1;
//     }
//     for (int k = 0; k < size; k++)
//     {
//         cout<<array[k]<<" ";
//     }
//     cout<<"\nNew arrays values..\n";
//     for (j = 5 ;j < size; j++)
//     {
//         cout<<array[j]<<"\n";
//     }

//     return 0;
// }

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
    int n, k;
    cin >> n >> k;
    Student st[n];
    int tu_u = 0;
    for (int i = 0; i < n; i++)
    {
        int id;
        cin >> id;
        bool found = false;
        for (int j = 0; j < tu_u; j++)
        {
            if (st[j].id == id)
            {
                st[j].count++;
                st[j].last_v = i;
                found = true;
                break;
            }
        }
        if (!found)
        {
            st[tu_u].id = id;
            st[tu_u].count = 1;
            st[tu_u].last_v = i;
            tu_u++;
        }
    }
    sort(st, st + tu_u, compare);
    for (int i = 0; i < k; i++)
    {
        cout << st[i].id << " ";
    }
    cout << "\n";

    return 0;
}