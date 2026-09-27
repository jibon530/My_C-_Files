#include <iostream>
#include <vector>
using namespace std;

vector <int> product_expect_self(vector <int>& nums, int& size)
{
    vector <int> ans(size,1);
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size;j++)
        {
            if(i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

int main()
{
    int t;
    cout << "Enter the test case number:";
    cin >> t;
    while(t--)
    {
        vector <int> vect;
    int n;
    cout << "Enter the vector size:";
    cin >> n;
    cout << "Enter " << n << " vector's value with seperate spaces:";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        vect.push_back(value);
    }
    vector <int> product = product_expect_self(vect,n);
    cout << "The product vector is: ";
    for(int i = 0; i < n; i++)
    {
        cout << product[i] << " ";
    }
    cout << "\n";

    }
    
    return 0;
}