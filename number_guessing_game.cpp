#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,tries = 0,guess;
    srand(time(NULL));
    num = (rand() % 20) + 1;
    cout << "*****< Wellcome to The Number Gurssing Game >*****\n";
    do
    {
        cout << "Enter a number between (1 to 20):";
        cin >> guess;
        tries++;
        if (guess > num)
        {
            cout << "Uffs..! Your guess is too high. Try again..\n";
        }
        else if(guess < num)
        {
            cout << "Uffs..! Your guess is too low. Try again..\n";
        }
        else
        {
            cout << "Congratulation..! Your guess is correct.\nThe number was:" << num << "\n" <<"Your tries is:" << tries << "\n";
        }

    }while(guess != num);
    cout << "The game is finised.\nThank you for play the game.\n";
    return 0;
}