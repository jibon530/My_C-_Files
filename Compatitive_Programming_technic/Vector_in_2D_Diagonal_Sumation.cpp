#include <iostream>
#include <vector>
using namespace std;
signed main()
{
    cout << "Enter the Diagonal's number:";
    int n; cin >> n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Enter " << i << " " << j << " Position = ";
            cin >> matrix[i][j];
        }
    }
    int Sumation = 0;

    for(int i = 0; i < n; i++)
    {
        Sumation += matrix[i][i];
        if(i != n-i-1){
            Sumation += matrix[i][n-i-1];
        }
    }
    cout << "The Diagonal Sumation = " << Sumation << '\n';
    return 0;
}