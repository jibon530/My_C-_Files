#include <iostream>
using namespace std;
void changeA(int& b)
{
    b = 58;
}
int main()
{
    int a = 10;
    // changeA(a);
    int* ptr = &a;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    
    return 0;
}