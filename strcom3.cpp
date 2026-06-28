#include <bits/stdc++.h>
using namespace std;
int countLeft(string s)
{
    const int CHAR = 256;
    bool visited[CHAR];
    fill(visited, visited + CHAR, false);
    int res = -1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (visited[s[i]])
            res = i;
        else
            visited[s[i]] = true;
    }
    return res;
}
int main()
{
    string s;
    cin >> s;
    int ans = countLeft(s);
    cout << ans;
    return 0;
}