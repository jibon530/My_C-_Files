
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k,c,a,b;
    cin >>n>>k>>c;

    a = (n + k - 1) / k; 
    b = a * c;
    cout << a << " " << b << "\n";
    return 0;
}