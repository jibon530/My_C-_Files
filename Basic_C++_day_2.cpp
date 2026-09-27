// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,j,rows, columns;
//     char symbol;
//     cout << "Enter how many rows Congratulation..! you want:";
//     cin >> rows;
//     cout << "Enter how many columns Congratulation..! you want:";
//     cin >> columns;
//     cout << "Enter the symbol that Congratulation..! you want append in the rows & columns:";
//     cin >> symbol;
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= columns; j++)
//         {
//             cout << symbol;
//         }
//         cout <<"\n";
//     }
//     return 0;
// }

//Generate random number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int num1 = (rand() % 6) + 1; //For a spacefick range
    /*
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    cout << num1 << "\n";
    cout << num2 << "\n";
    
    cout << num1 << "\n";
    */
   switch(num1)
   {
    case 1:
        cout << "Congratulation..! You Win a Samart TV.\n";
        break;
    case 2:
        cout << "Congratulation..! You Win a Smart Phone.\n";
        break;
    case 3:
        cout << "Congratulation..! You Win a Gaming headset.\n";
        break;
    case 4:
        cout << "Congratulation..! You Win a Free lunce.\n";
        break;
    case 5:
        cout << "Congratulation..! You Win $5 cashback.\n";
        break;
    case 6:
        cout << "Congratulation..! You Win $3 cashback.\n";
        break;
    default: cout << "Sorry..! Better lucy next time.\n";
   }
    return 0;
}