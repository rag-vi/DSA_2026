#include <bits/stdc++.h>
using namespace std;

int leftMost(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
                return i;
        }
    }

    return -1;
}

int main()
{
    string s;
    cin >> s;

    int ans = leftMost(s);

    cout << ans;

    return 0;
}