/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "geeksforgeeks";

    cout << str.length() << " ";

    str = str + "xyz";
    cout << str << " ";

    cout << str.substr(1, 3) << " ";

    cout << str.find("eek") << " ";

    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "bcd";

    if (s1 == s2)
        cout << "Same";
    else if (s1 > s2)
        cout << "Greater";
    else
        cout << "Smaller";

    return 0;
}