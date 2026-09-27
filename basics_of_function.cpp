#include <bits/stdc++.h>
using namespace std;
double x,y,a,b,s;
void sum()
{   cout << "Enter two numbers with spaces:";
    cin >> x >> y;
    s = x + y;
    cout <<"The sum is:" << s << "\n";
}
void sub()
{   cout << "Enter two numbers with spaces:";
    cin >> x >> y;
    s = x - y;
    cout << "The subtraction is:" << s << "\n";
}
void mul()
{   cout << "Enter two numbers with spaces:";
    cin >> x >> y;
    s = x * y;
    cout << "The multplication is:" << s << "\n";
}
void div()
{   cout << "Enter two numbers with spaces:";
    cin >> x >> y;
    if( y == 0)
    {
        cout << "Sorry..! The divition is not possible.\n";
    }
    else
    {
        s = x / y;
        cout << "The divition is:" << s <<"\n";
    }
}
int main ()
{   
    int t,n;
    cout << "Enter test case number:";
    cin >> t;
    cout << "Your tast case number is:" << t << "\n";
    while(t--)
    {
        cout << "Still you have " << t <<" test cases.\n";
        cout << "***The Calculator***\n";
        cout << "1.Addition.\n";
        cout << "2.Subtraction.\n";
        cout << "3.Multplication.\n";
        cout << "4.Divition.\n";
        cout << "Enter what you want to calculate..\nPlease Enter just these numbers (like 1,2,3,4)\nEnter:";
        cin >> n;
        if (n == 1)
        {   cout << "You choosen option " << n << " The Additionn.\n";
            sum();
        }
        else if(n == 2)
        {   cout << "You choosen option " << n << " The Subtraction.\n";
            sub();
        }
        else if(n == 3)
        {   cout << "You choosen option " << n << " The Multplication.\n";
            mul();
        }
        else if(n == 4)
        {   cout << "You choosen option " << n << " The Divition.\n";
            div();
        }
        else
        {
            cout << "Sorry..! Your selection is invalid.\nPleaase, Select only these options(like 1,2,3,4)..!\n";
        }
    }
    return 0;
}