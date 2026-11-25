#include <bits/stdc++.h>
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
    int Maxrow_sum = INT_MIN;
    for(int i = 0; i < row; i++)
    {
        int Rowsum = 0;
        for(int j = 0; j < colm; j++)
        {
            Rowsum += matrix[i][j];
        }
        Maxrow_sum = max(Rowsum,Maxrow_sum);
    }
    cout << "The maximum row sum = " << Maxrow_sum << '\n';
    return 0;
}