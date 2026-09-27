#include <bits/stdc++.h>
using namespace std;
int num,lastdi,sumOflast_digit;
int sumofdigit(int x)
{   
    sumOflast_digit = 0;
    while (x > 0)
    {
        lastdi = x % 10;
        sumOflast_digit += lastdi;
        x /= 10;
    }
    return sumOflast_digit;
}

int main()
{
    cout << "Enter the number:";
    cin >> num;
    cout << "The sum of digits is:" << sumofdigit(num) << "\n";
    return 0;
}