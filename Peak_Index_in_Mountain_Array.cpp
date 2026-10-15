#include <bits/stdc++.h>
using namespace std;

void Peak(vector <int>& A,int n)
{
    int low = 1, high = n - 2;
    while(low <= high)
    {
        int mid = low + ((high - low) / 2);
        if(A[mid - 1] < A[mid] && A[mid] > A[mid + 1])
        {
            cout << "The Peak index is: " << mid << "\n";
            cout << "The Peak value is: " << A[mid] << "\n";
            break;
        }
        else if(A[mid-1] < A[mid])
        {
            low = mid + 1;
        }
        else if(A[mid-1] > A[mid])
        {
            high = mid - 1;
        }
        else
        {
            cout << "It's not a Mountain Array.\n";
        }
    }
}

int main()
{
    cout << "Enter the test case number:";
    int t;
    cin >> t;
    while(t--)
    {
        cout << "Enter the Mountain Array size:";
        int sz;
        cin >> sz;
        cout << "Enter " << sz << " Mountain Array's value with seperate spaces:";
        vector <int> vect(sz);
        for(int i = 0; i < sz; i++)
        {
            cin >> vect[i];
        } 
        Peak(vect,sz);
    }
    return 0;
}
