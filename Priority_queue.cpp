#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    //Max Heap
    priority_queue <int> max_pq;
    max_pq.push(5);
    max_pq.emplace(3);
    max_pq.emplace(10);
    max_pq.emplace(4);

    cout << "Max Heap\n";

    while(!max_pq.empty())
    {
        cout << max_pq.top() << " ";
        max_pq.pop();
    }
    cout << "\n";

    //Min Heap
    priority_queue <int,vector <int>, greater<int>> min_pq;
    min_pq.push(5);
    min_pq.emplace(3);
    min_pq.emplace(10);
    min_pq.emplace(4);

    cout << "Min Heap\n";
    while(!min_pq.empty())
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << "\n";
    return 0;
}