// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string name,name1;
//     cout<<"Enter your name:";
//     getline(cin,name);  //For Enter name or Sectence with spaces.
//     cin>>name1;          //For Enter a single sentence or leter.
//     cout << name << "\n" << name1 << "\n";
//     return 0; 
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double x,y,z;
//     x = 5; y = 8;
//     z = min(x,y);   //For minimum value.
//     z = max(x,y);   //For maximun value.

//     cout<<z<<"\n";
//     return 0;
// }

//Pythagorean theorem
// #include <iostream>
// #include <cmath>
// int main()
// {
//     double a,b,c;
//     std::cout <<"Enter the first side:";
//     std::cin >> a;
//     std::cout <<"Enter the second side:";
//     std::cin >> b;
//     a = pow(a,2);
//     b = pow(b,2);
//     c = sqrt(a + b);
//     std::cout << "The third side is: " << c << "\n";
//     return 0;
// }

//Month Cheak
#include <iostream>
int main()
{
    int month;
    std::cout << "Enter the mounth number (1 to 12): ";
    std::cin >> month;
    switch (month)
    {
        case 1:
            std::cout << "It's January.\n";
            break;
        case 2:
            std::cout << "It's February.\n";
            break;
        case 3:
            std::cout << "It's March.\n";
            break;
        case 4:
            std::cout << "It's April.\n";
            break;
        case 5:
            std::cout << "It's May.\n";
            break;
        case 6:
            std::cout << "It's June.\n";
            break;
        case 7:
            std::cout << "It's July.\n";
            break;
        case 8:
            std::cout << "Its August.\n";
            break;
        case 9:
            std::cout << "It's September.\n";
            break;
        case 10:
            std::cout << "It's October.\n";
            break;
        case 11:
            std::cout << "It's November.\n";
            break;
        case 12:
            std::cout << "It's December.\n";
            break;
        default :
            std::cout << "Sorry..! Please Enter only month number (1-12).\n";
    }
    return 0;
}

//Grade cheak
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char grade;
//     cout << "Enter your grade (like:A to F): ";
//     cin >> grade;
//     grade = toupper(grade);
//     switch (grade)
//     {
//         case 'A':
//             cout << "You did Excellent.\n";
//             break;
//         case 'B':
//             cout << "You did good.\n";
//             break;
//         case 'C':
//             cout << "You did average.\n";
//             break;
//         case 'D':
//             cout << "You did not good.\n";
//             break;
//         case 'F':
//             cout << "Sorry..! But you Failled.\n";
//             break;
//         default:
//             cout << "Sorry..! Invalid grade.Please enter a valid grade.\n";
//     }
//     return 0;
// }

//Upper and lower charecter and sentence

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string sentence;
//     cout << "Enter the whole sentence: ";
//     getline(cin, sentence);
//     for (char & c : sentence)
//     {
//         c = toupper(c);
//     }
//     cout << "The uppercase sentence is: " << sentence << "\n";
//     return 0;
// }
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double result;
    cout << "Enter your result: ";
    cin >> result;
    result >= 36 ? cout << "Congratulation..! You passed.\n" : cout << "Sorry..! But you falled.\n";
    return 0;
}
*/