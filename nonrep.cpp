#include <bits/stdc++.h>
using namespace std;
int nonrepLeft(string s)
{
    const int CHAR = 256;
    bool visited[CHAR];
    fill(visited, visited + CHAR, true);
    int res = -1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (!visited[s[i]])
            res = i;
        }
    return res;
}

int main()
{
    string s;
    cin >> s;
    int ans = nonrepLeft(s);
    cout << ans;
    return 0;
}