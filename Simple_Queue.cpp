#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <int> q;
    q.push(1);
    q.emplace(2);
    q.emplace(3);
    

    cout << "Front value: " << q.front() << ", " << "Second value: " << q.front()+1 << "\n";

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
    return 0;
}