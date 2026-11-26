#include <bits/stdc++.h>
using namespace std;
pair<int,int> Search(vector<vector<int>>& matrix,int tg)
{
    pair<int,int> p;
    int rowsz = matrix.size(),colsz = matrix[0].size();
    int row = 0, colm = colsz-1;
    while(row < rowsz && colm >= 0)
    {
        if(matrix[row][colm] == tg)
        {
            p = {row,colm};
            return p;
        }
        else if(matrix[row][colm] > tg) colm--;
        else row++;
    }
    p = {-1,-1};
    return p;
}
signed main()
{
    cout << "Enter the Row & Column Numbers with seperate Spaces:";
    int row,colm; cin >> row >> colm;
    vector<vector<int>> matrix(row,vector<int>(colm));
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < colm; j++)
        {
            cout << "Enter " << i << ' ' << j << " Position = ";
            cin >> matrix[i][j];
        }
    }
    cout << "Now Enter the Target = ";
    int tg; cin >> tg;
    auto solution = Search(matrix,tg);
    cout << "The index are = " << solution.first+1 << ' ' << solution.second+1 << '\n';
    return 0;
}