#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "enter name" << endl;
    //  cin >> str;
    getline(cin, str, 'w');
    cout << str;
    return 0;
}