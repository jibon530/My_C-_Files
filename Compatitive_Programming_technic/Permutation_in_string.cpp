#include <bits/stdc++.h>
using namespace std;
bool isfreqsame(int freq1[], int freq2[])
{
    for(int i = 0; i < 26; i++)
    {
        if(freq1[i] != freq2[i]) return false;
    }
    return true;
}
bool cheak(string s1,string s2)
{
    int freq[26] = {0};
    for(int i = 0; i < s1.length(); i++)
    {
        int idx = s1[i] - 'a';  //For a -> 0, b -> 2
        freq[idx]++;
    }
    int s1len = s1.length(), s2len = s2.length();
    for(int i = 0; i < s2len; i++)
    {
        int windidx = 0, idx = i;
        int windfreq[26] = {0};
        while(windidx < s1len && idx < s2len)
        {
            windfreq[s2[idx] - 'a']++;
            windidx++; idx++;
        }
        if(isfreqsame(freq,windfreq))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1,s2; cin >> s1 >> s2;
    if(cheak(s1,s2)) cout << "YES" << '\n';
    else cout << "NO\n";
    return 0;
}