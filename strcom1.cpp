#include <bits/stdc++.h>
using namespace std;
int leftMostcount(string s)
{
    const int CHAR = 256;
    int freq[CHAR] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)

        if (freq[s[i]] > 1)

            return i;
    return -1;
}
int main()
{
    string s;
    cin >> s;

    int ans = leftMostcount(s);

    cout << ans;

    return 0;
}