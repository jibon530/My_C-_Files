#include <bits/stdc++.h>
using namespace std;

int Majariti_Element(vector <int>& nums, int size)
{
    int frequency = 0, element = 0;
    for(int i = 0; i < size; i++)
    {
        if (frequency == 0)
        {
            element = nums[i];
        }
        if (element == nums[i])
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }
    return element;
}

int main()
{
    vector <int> vect;
    cout << "Enter the vector size:";
    int n;
    cin >> n;
    cout << "Enter " << n << " vector's value with seperate spaces:";
    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vect.push_back(value);
    }
    cout << "The majaroti element is: " << Majariti_Element(vect,n) << "\n";
    return 0;
}