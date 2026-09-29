#include <bits/stdc++.h>
using namespace std;

void Equilateral()
{
    double a,area;
    cout << "Enter the triangle side:";
    cin >> a;
    area = (sqrt(3) / 4) * (a*a);
    cout << "The area of Equilateral Triangle is:" << fixed << setprecision(3) << area << "\n";
}

void Isosceles()
{
    double a,b,area;
    cout << "Enter the same side and other side with seperate spaces:";
    cin >> b >> a;
    area = (b/4) * sqrt((4*(a*a)) - (b*b));
    cout << "The area of The Isosceles Triangle is:" << fixed << setprecision(3) << area <<"\n";
}

void Scalen()
{
    cout << "Enter the three triangle side with seperate spaces:";
    double a,b,c,s,area;
    cin >> a >> b >> c;

    if((a+b) > c && (b+c) > a && (c+a) > b)
    {
        s = a + b + c;

        area = sqrt(s*(s-a)*(s-b)*(s-c));

        cout << "The area of Scalen Triangle is:" << fixed <<  setprecision(3) << area << "\n";
    }
    else
    {
        cout << "Sorry..! But from this value can't make a valid triangle.\n";
    }
}

int main()
{
    int t;
    cout << "Enter test case number:";
    cin >> t;
    while(t--)
    {
        cout << "01.Equilateral Triangle.\n";
        cout << "02.Isosceles Triangle.\n";
        cout << "03.Scalen Triangle.\nEnter only Number:";
        int option;
        cin >> option;
        if(option == 1)
        {
            Equilateral();
        }
        else if(option == 2)
        {
            Isosceles();
        }
        else if(option == 3)
        {
            Scalen();
        }
        else
        cout << "Sorry..!Please chose a valid option.\n";
    }
    return 0;
}