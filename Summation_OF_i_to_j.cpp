#include <bits/stdc++.h>
using namespace std;

int Addition(vector < int > &numbers, int p,int q)
{
    int size = numbers.size(), total = 0;
    while(p <= q)
    {
        total += numbers[p];
        p++;
    }
    return total;
}

int main()
{
    int t;
    cout << "Enter the Test case number:";
    cin >> t;
    while(t--)
    {
        int n;
        cout << "Enter the Array size:";
        cin >> n;
        cout << "Enter " << n << " Array with seperate spaces:";
        vector < int > vect;
        for(int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            vect.emplace_back(value);
        }
        cout << "Now enter test case nummbers:";
        int tt;
        cin >> tt;
        while(tt--)
        {
            int i,j;
            cout << "Enter i and j with seperate spaces:";
            cin >> i >> j;

            int sumation = Addition(vect,i,j);

            cout << "The sumation i to j is: " << sumation << "\n";
        }
    }
    return 0;
}