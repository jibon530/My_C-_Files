#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    // cout << "Enter vector size = ";
    // cin >> s;
    vector <int> vec;
    cout << "Size = " << vec.size() << "\n";
    int sz = vec.size(); //For vector size
    vec.push_back(35); // For add a value in vector in last like append in Python
    vec.push_back(65);
    vec.push_back(45);
    vec.push_back(88);
    vec.push_back(66);
    vec.push_back(89);
    vec.push_back(92);
    vec.push_back(58);
    vec.push_back(78);
    vec.push_back(46);
    vec.push_back(124);


    
    cout << "After push back = " << vec.size() << "\n";
    for(int num : vec) //For cout all value in vector
    {
        cout << num << " ";
    }
    cout << "\n";

    vec.pop_back(); //For remove last value in vector
    cout << "After pop back = " << vec.size() << "\n";
    for(int num : vec) //For cout all value in vertor
    {
        cout << num << " ";
    }
    cout << "\n";
    cout << "The first value.\n";
    cout << vec.front() << "\n"; //For first value in vector
    cout << "The last value.\n";
    cout << vec.back() << "\n"; //For last value in vector
    cout << "The value in index 1.\n";
    cout << vec.at(1) <<"\n"; // For get value in that possition.
    cout << "The capacity of vector.\n";
    cout << vec.capacity() << "\n";//For vector capacity
    cout << "Size = " << vec.size() << "\n";

    return 0;
}