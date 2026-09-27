// Number Pattern 01

/*

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            cout << ".";
        }
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}

*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i+1; j++)
        {
            cout<<j;
        }
        for(j = 1; j <= i-1; j++)
        {
            cout<<".";
        }
        cout<<"\n";
    }
    return 0;
}
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        // সংখ্যা প্রিন্ট করার জন্য
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }

        // ডট (.) প্রিন্ট করার জন্য
        for (j = 1; j <= i - 1; j++)
        {
            cout << ".";
        }

        cout << "\n";
    }

    return 0;
}