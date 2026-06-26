#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str = "acba";
    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev)
    {
        cout << " True";
    }
    else
    {
        cout << "false";
    }

    return 0;
}