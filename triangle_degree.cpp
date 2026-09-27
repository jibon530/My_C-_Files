#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,A,B,C,pi,area,n,x,y,Z;
    pi = acos(-1);
    cout<<"Please select a option..\n";
    cout<<"01.Give three sides and get the angles\n";
    cout<<"02.Give twe sides and a angle\n";
    cout<<"03.Give b,c sides and A angles for triangle area\nEnter:"; cin>>n;
    if(n == 1)
    {
        cout<<"You selected the first option\nEnter three sides with seperat space\nEnter:";
        cin>>a>>b>>c;
        A = acos(((b*b) + (c*c) - (a*a)) / (2*b*c));
        B = acos(((a*a) + (c*c) - (b*b)) / (2*a*c));
        C = acos(((a*a) + (b*b) - (c*c)) / (2*a*b));
        A = (A * (180 / pi));
        B = (B * (180 / pi));
        C = (C * (180 / pi));
        cout<<"The angels are:"<<A<<" "<<B<<" "<<C<<"\n";
    }
    else if(n == 2)
    {
        cout<<"You selected the second option\nEnter two sides and a angle with seperate space\n Note(Enter two sides first and angle in degree)..!\nEnter:";
        cin>>x>>y>>Z;
        Z = Z * (pi / 180);
        A = asin(((x) * sin(Z)) / y);
        A = (A * (180 / pi));
        cout<<"The angle is:"<<" "<<A<<"\n";
    }
    else if(n == 3)
    {
        cout<<"You selected the third option\nEnter two sides and a angle in degree..\nEnter:";
        cin>>b>>c>>A;
        A = A * (pi / 180);
        area = 0.5 * b * c * (sin(A));
        cout<<"The area of triangle is:"<<area<<"\n";
    }
    else
    cout<<"Error...!Please chose only these three options";
    return 0;
}