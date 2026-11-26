#include <bits/stdc++.h>
using namespace std;
vector <int> Spiral_Matrix(vector<vector<int>>& matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    int srow = 0, erow = row-1, scol = 0, ecol = col-1;
    vector <int> v;
    while(srow <= erow && scol <= ecol)
    {
        //Top
        for(int j = scol; j <= ecol; j++)
        {
            v.emplace_back(matrix[srow][j]);
        }
        //Right
        for(int i = srow+1; i <= erow; i++)
        {
            v.emplace_back(matrix[i][ecol]);
        }
        //Bottom
        for(int j = ecol - 1; j >= scol; j--)
        {
            if(srow == erow) break;
            v.emplace_back(matrix[erow][j]);
        }
        //Left
        for(int i = erow-1; i >= srow+1;i--)
        {
            if(scol == ecol) break;

            v.emplace_back(matrix[i][scol]);
        }
        srow++; erow--;
        scol++; ecol--;
    }
    return v;
}
signed main()
{
    cout << "Enter the row and column Numbers:";
    int row,col; cin >> row >> col;
    vector<vector<int>> matrix(row,vector<int>(col));
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "The Matrix Is:\n";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
    auto solution = Spiral_Matrix(matrix);
    for(int val : solution)
    {
        cout << val << ' ';
    }
    cout << '\n';
    return 0;
}