#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{
    //Stardard Set
    set <int> s;
    s.insert(4);
    s.emplace(15);
    s.emplace(4);   //Duplicate value will not count
    s.emplace(9);
    s.emplace(6);
    cout <<"Set's value:";
    for(auto & val : s)
    {
        cout << val << " ";
    }
    cout << "\n";

    cout << "Reverse Set's value:";
    for(auto it = s.rbegin(); it != s.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    //Unordered set

    unordered_set <int> us;
    us.insert(4);
    us.emplace(15);
    us.emplace(4);   //Duplicate value will not count
    us.emplace(9);
    us.emplace(6);
    cout <<"Unordered Set's value:";
    for(auto & val : us)
    {
        cout << val << " ";
    }
    cout << "\n";
    //Multi set
    multiset <int> mul_s;
    mul_s.insert(4);
    mul_s.emplace(15);
    mul_s.emplace(4);   //Duplicate value will also count
    mul_s.emplace(9);
    mul_s.emplace(6);
    cout <<"Multi Set's value:";
    for(auto & val : mul_s)
    {
        cout << val << " ";
    }
    cout << "\n";
    return 0;
}