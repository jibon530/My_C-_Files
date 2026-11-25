#include <iostream>
using namespace std;
signed main()
{
    cout << "Enter the Rows & Column Number:";
    int row,colm; cin >> row >> colm;
    int matrix [row][colm];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < colm; j++)
        {
            cout << "Enter " << i << " " << j << " Position = ";
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < colm; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}