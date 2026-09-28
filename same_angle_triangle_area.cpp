#include <bits/stdc++.h>
using namespace std;

double area(double & base, double & high)
{
    double area = 0.5 * base * high;
    return area;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double a,b,c;
        cin >> a >> b >> c;
        if(pow(a,2) + pow(b,2) == pow(c,2))
        {
            cout << "From this value we can make a valis triangle\n";
            cout << "The area of the triangle = " << area(a,c) << "\n";
        }
        else
        cout << "Sorry..!But From this value can't make a valid same angle triangle\n";
    }
    return 0;
}