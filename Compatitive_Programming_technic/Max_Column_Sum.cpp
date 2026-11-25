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
    int Maxcol_sum = INT_MIN;
    for(int i = 0; i < colm; i++)
    {
        int Colmsum = 0;
        for(int j = 0; j < row; j++)
        {
            Colmsum += matrix[j][i];
        }
        Maxcol_sum = max(Colmsum,Maxcol_sum);
    }
    cout << "The maximum Column sum = " << Maxcol_sum << '\n';
    return 0;
}