#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int* ptr = &a;
    int** ptr1 = &ptr;          //Pointer to pointer
    int*** ptr2 = &ptr1;
    cout << ptr << endl;
    cout << &a << endl;
    cout << ptr1 << endl;
    cout << &ptr << endl;
    cout << &ptr2 << endl;
    cout << &ptr1 << endl;
    cout << **(&ptr) << endl;   //Dereferance
    cout << *(&a) << endl;      //Dereference
    int* b = NULL;
    cout << b << endl;
    return 0;
}