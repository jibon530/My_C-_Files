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

//Number Pattern 02
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = n-i+1; j >= 1; j--)
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
//Pettren 2 half
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = 2; j <= n-i+1; j++)
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
//Pattern 3 the homework_1
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
        for(j = 2; j <= n-i+1; j++)
        {
            cout<<j;
        }
        for(j = 1; j <= i-1; j++)
        {
            cout<<".";
        }
        cout << "\n";
    }
    return 0;
}
*/

//Number Pattern 03

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            cout<<".";
        }
        for(j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
*/

// Number Pattern 4


/*

#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for(j = 1; j <= n-i; j++)
        {
            cout<<".";
        }
        cout<<"\n";
    }
    return 0;
}
*/
//The Number Pattern first part..
/*

#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,i,j;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            cout<<".";
        }
        for(j = 1; j <= i-1; j++)
        {
            cout<<j;
        }
        for(j = i; j >= 1; j--)
        {
            cout<<j;
        }
        for(j = 1; j <= n - i; j++)
        {
            cout<<".";
        }
        
        cout<<"\n";
    }
    return 0;
}
*/
//Number Pattern half side
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        for(j = i; j >= 1; j--)
        {
            cout<<j;
        }
        for(j = 1; j <= n - i; j++)
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
        for (j = 1; j <= i - 1; j++)
        {
            cout << ".";
        }
        for (j = 1; j+1 <= n - i + 1; j++)
        {
            cout << j;
        }
        for(j = n-i+1; j >= 1; j--)
        {
            cout<<j;
        }
        for(j = 1; j <= i-1; j++)
        {
            cout<<".";
        }
        cout << "\n";
    }
    return 0;
}