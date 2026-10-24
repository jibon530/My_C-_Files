#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>d = {20,30,40};
    d.push_back(50);
    d.emplace_front(10);
    for(auto val: d)
    {
        cout << val << " ";
    }
    cout << "\n";

    cout << d[2] << "\n";
    return 0;
}