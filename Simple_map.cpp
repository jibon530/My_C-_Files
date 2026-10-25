#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    //Standard  Map
    map <string,int> m;
    m["TV"] = 100;
    m["Laptop"] = 100;
    m["Headphones"] = 200;

    m.insert({"Phones",60});
    m.emplace("PS5", 20);

    cout << "Standard Map\n";
    for(auto p : m)
    {
        cout << p.first << " " << p.second << "\n";
    }

    cout << "\n";
    //Unordered  Map
    unordered_map <string,int> um;
    um["TV"] = 100;
    um["Laptop"] = 100;
    um["Headphones"] = 200;

    um.insert({"Phones",60});
    um.emplace("PS5", 20);

    cout << "Unordered Map\n";
    for(auto p : um)
    {
        cout << p.first << " " << p.second << "\n";
    }
    cout << "\n";
    //Multi Map
    multimap <string,int> mul;
    mul.insert({"TV",80});
    mul.emplace("Phones",150);
    mul.emplace("Laptop",60);
    mul.emplace("Camera",75);
    mul.emplace("Headphones",180);
    mul.emplace("Phones",140);
    cout << "Multi Map\n";
    for(auto & p : mul)
    {
        cout << p.first << " " << p.second << "\n";
    }
    
    return 0;
}
