#include <iostream>
#include <vector>
using namespace std;

vector <int> Insertion_Sort(vector < int > &nums, int size)
{
    for(int i = 1; i < size; i++)
    {
        int x = nums[i];
        int j = i - 1;
        while(j >= 0 && nums[j] > x)
        {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = x;
    }
    return nums;
}

int main()
{
    int t;
    cout << "Enter the test case number:";
    cin >> t;
    while(t--)
    {
        cout << "Enter the vector size:";
        int n;
        cin >> n;
        vector < int > vect;
        cout << "Enter " << n << " vactor's value with seperate spaces:";
        for(int i = 0; i < n; i++)  
        {
            int value;
            cin >> value;
            vect.emplace_back(value);
        }
        vector <int> New = Insertion_Sort(vect,n);
        cout << "Sorted Vector:";
        for(int j = 0; j < n;j++)
        {
            cout << New[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}