#include <iostream>
using namespace std;

int main()
{
    int sz;
    cout << "Enter the array size:";
    cin >> sz;
    int marks[sz];

    for (int i = 0; i < sz; i++)
    {
        cin >> marks[i];
    }
    int s = sizeof(marks) / sizeof(int);
    for (int i = 0; i < s; i++)
    {
        cout << marks[i] << " ";
    }
    cout << "\n";
    cout << "This is size: " << s << "\n";

    return 0;
}