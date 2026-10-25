#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{   int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    stack <int> s;
    for(int val : v)
    {
        s.emplace(val);
    }

   while(!s.empty())
   {
    cout << s.top() << " ";
    s.pop();
   }
   cout << "\n";
    return 0;
}