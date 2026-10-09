#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector <int> vect = {10,20,30,40,50,60,70,80};
    int lo = 0, hi = (vect.size()) - 1, mid, x = 20;
    while(lo <= hi)
    {
        mid = lo + (hi-lo) / 2;
        if(vect[mid] == x) 
        {
            cout << "Index is: " << mid << "\n"; 
            break;
        }
        else if(vect[mid] < x) lo = mid + 1;
        else hi = mid-1; 
    }
    return 0;
}