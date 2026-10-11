#include <iostream>
#include <vector>
using namespace std;

void Selection_Sort(vector <int>& number,int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if (number[i] > number[j])
            {
                swap(number[i],number[j]);
            }
        }
    }
    for(int value: number)
    {
        cout << value << " ";
    }
    cout << "\n";
}

int main()
{
    cout << "Enter the Array size:";
    int n;
    cin >> n;
    cout << "Enter the vector size with seperate spaces:";
    vector <int> vect;
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vect.emplace_back(value);
    }

    Selection_Sort(vect,n);
    
    return 0;
}