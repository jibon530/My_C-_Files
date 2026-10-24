#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;
int main()
{
    pair <int,string> p = {1,"Jibon"};
    cout << p.first  << " " << p.second << "\n";
    
    pair<int,pair<string,string>> n_p = {1,{"Jibon","Piku"}};

    cout << n_p.first << " " << n_p.second.first << " " << n_p.second.second << "\n";

    //Vector Of Pairs
    vector<pair<string, string>> nes_P;
    nes_P.emplace_back("Jibon","Piku");
    nes_P.push_back({"Jibon","Priyanka"});

    for(auto val: nes_P)
    {
        cout << val.first << " " << val.second  << "\n";
    }
    return 0;
}