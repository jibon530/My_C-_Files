#include <bits/stdc++.h>
using namespace std;
pair<int,int> Sarch_in_Row(vector<vector<int>>& matrix,int tg,int midrow)
{
    int colm = matrix[0].size();

    pair<int,int>p;

    int fstcal = 0, lstcal = colm-1;
    while(fstcal <= lstcal)
    {
        int midcal = fstcal + ((lstcal-fstcal)/2);
        if(matrix[midrow][midcal] == tg)
        {
            p = {midrow,midcal};
            return p;
        }
        else if(matrix[midrow][midcal] < tg){
            fstcal = midcal +1;
        }
        else lstcal = midcal - 1;
    }
    p = {-1,-1};
    return p;
}
signed main()
{
    cout << "Enter the Row And column numbers with seperate spaces:";
    int row, colm; cin >> row >> colm;
    vector<vector<int>> matrix(row,vector<int>(colm));
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < colm; j++)
        {
            cout << "Enter " << i << " " << j << " Position Value:";
            cin >> matrix[i][j];
        }
    }

    cout << "Now Enter the target:";
    int tg; cin >> tg;
    int fstrow = 0, lstrow = row-1;
    int n = colm -1;
    while(fstrow <= lstrow)
    {
        int midrow = fstrow + ((lstrow - fstrow)/2);
        if(matrix[midrow][0] <= tg && tg <= matrix[midrow][n])
        {
            auto solution = Sarch_in_Row(matrix,tg,midrow);
            cout << "The Index are = " << solution.first+1 << ' ' << solution.second+1 << '\n';
            break;
        }
        else if(matrix[midrow][n] < tg) fstrow = midrow + 1;
        else lstrow = midrow - 1;
    }
    return 0;
}