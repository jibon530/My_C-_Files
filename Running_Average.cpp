/*
It's me Jibon
Problem Link:https://toph.co/p/running-average?in=cat~~-~mathematics
*/

#include <iostream>
using namespace std;
int main()
{
    double n,sums = 0;
    cin >> n;
    for(int i = 1; i <= n;i++)
    {
        double num,avg;
        cin >> num;
        sums += num;
        avg = sums/i;
        cout << avg << '\n';
    }
    return 0;
}