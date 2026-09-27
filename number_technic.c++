//Decimal to Binary
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int bi[105],num,i=0,j;
    cin>>num;
    while (num != 0)
    {
        bi[i] = num % 2;
        num = num / 2;
        i=i+1;
    }
    for(j = i-1; j >= 0; j--)
    {
        cout<<bi[j];
    }
    cout<<"\n";
    return 0;
}
*/
//Decimal to Octal
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int oc[105],num,i = 0,j;
    cin>>num;
    while (num != 0)
    {
        oc[i] = num % 8;
        num = num / 8;
        i++;
    }
    for( j = i - 1; j >= 0; j--)
    {
        cout<<oc[j];
    }
    cout<<"\n";
    return 0;
}
*/
//Decimal to Hexa-Decimal
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hd[105],num,i = 0,j;
    cin>>num;
    while (num != 0)
    {
        hd[i]= num % 16;
        num = num / 16;
        i++;
    }
    for(j = i-1; j >= 0; j--)
    {
        //cout<<hd[j];
        if(hd[j] >= 10)
        {
            cout<<(char)('A' + (hd[j] - 10));
        }
        

        if (hd[j] == 10)
        cout<<"A";
        else if(hd[j]== 11)
        cout<<"B";
        else if (hd[j]==12)
        cout<<"C";
        else if (hd[j]==13)
        cout<<"D";
        else if (hd[j]==14)
        cout<<"E";
        else if (hd[j]==15)
        cout<<"F";
        else
        cout<<hd[j];
    }
    cout<<"\n";
    return 0;
}
*/

