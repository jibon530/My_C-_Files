#include <iostream>
#include <vector>
using namespace std;

vector <int> Bubble_Sort(vector <int> & number,int size)
{
    for(int i = 1; i <= size; i++)
    {
        for(int j = 0; j < (size-i); j++)
        {
            if(number[j] > number[j+1])
            {
                swap(number[j],number[j+1]);
            }
        }
    }
    
    return number;
}

int main()
{
    cout << "Enter the test case number:";
    int t;
    cin >> t;
    while(t--)
    {
        cout << "Enter the Array size:";
        int n;
        cin >> n;
        cout << "Enter " << n << " Array's value with seperate spaces:";
        vector <int> vect;
        for(int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            vect.emplace_back(value);
        }

        vector <int> nums = Bubble_Sort(vect,n);

        for(int value : nums)
        {
            cout << value << " ";
        }
        cout << "\n";
    }

    return 0;
}