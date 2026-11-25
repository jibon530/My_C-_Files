#include <bits/stdc++.h>
using namespace std;
pair<int,int> Linear_2D(int mt[][3],int row,int col,int tg)
{
    pair<int,int> p;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(mt[i][j] == tg)
            {
                p = {i,j};
                return p;
            }
        }
    }
    p = {-1,-1};
    return p;
}
signed main()
{
    cout << "Enter Rows Number:";
    int row; cin >> row;
    int matrix[row][3];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter " << i << " And " << j << " value:";
            cin >> matrix[i][j];
        }
    }
    cout << "Enter the Target:";
    int tg; cin >> tg;
    auto solve = Linear_2D(matrix,row,3,tg);
    cout << "The Target is:" << solve.first << " " << solve.second << '\n';
    return 0;
}