#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int>l = {2,3,4,5};
    l.push_back(6);
    l.push_front(1);
    l.emplace_back(7);
    l.pop_back();
    l.emplace_front(0);
    
    // l.clear();
    cout << "Is empty = " << l.empty() << "\n";
    for(auto val: l)
    {
        cout << val << " ";
    }
    cout << "\n";
    return 0;
}