#include <bits/stdc++.h>
using namespace std;

bool isPal(string &s)
{
    int low = 0;
    int high = s.length() - 1;

    while (low < high)
    {
        if (s[low] != s[high])
            return false;

        low++;
        high--;
    }

    return true;
}

int main()
{
    string s = "abba";

    if (isPal(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}