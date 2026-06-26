#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str1[] = "abc", str2[] = "bcd";
    int res = strcmp(str1, str2);
    if (res > 0)
    {
        cout << "greater";
    }
    else if (res == 0)
    {
        cout << "same";
    }
    else
    {
        cout << "smaller";
    }
}