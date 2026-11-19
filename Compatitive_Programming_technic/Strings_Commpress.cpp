#include <bits/stdc++.h>
using namespace std;
int solution(vector <char>& chars,int n)
{
    int idx = 0;
    for(int i = 0; i < n; i++)
    {
        char ch = chars[i];
        int count = 0;
        while(i < n && chars[i] == ch)
        {
            count++; i++;
        }
        if(count == 1) chars[idx++] = ch;
        else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(char dig : str)
            {
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}
int main()
{
    int n; cin >> n;
    vector<char> v (n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << solution(v,n) << '\n';
    return 0;
}