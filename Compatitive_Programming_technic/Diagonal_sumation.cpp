#include <iostream>
using namespace std;
signed main()
{
    cout << "Enter the Diagonal's number:";
    int n; cin >> n;
    int matrix [n][n];
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
        for(int j = 0; j < n; j++)
        {
            if(i == j){
                Sumation += matrix[i][j];
            }
            else if(j == n - i - 1){
                Sumation += matrix[i][j];
            }
        }
    }
    cout << "The Diagonal Sumation = " << Sumation << '\n';
    return 0;
}