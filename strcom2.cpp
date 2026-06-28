#include <bits/stdc++.h>
using namespace std;
int leftMostCount(string s)
{
    const int CHAR = 256;
    int fIndex[CHAR];
    fill(fIndex, fIndex + CHAR, -1);
    int res = INT_MAX;
    for (int i = 0; i < s.length(); i++)
    {
        int fi = fIndex[s[i]];
        if (fi == -1)
            fIndex[s[i]] = i;
        else
            res = min(res, fi);
    }
    return (res == INT_MAX) ? -1 : res;
}
int main()
{
    string s;
    cin >> s;

    int ans = leftMostCount(s);

    cout << ans;

    return 0;
}