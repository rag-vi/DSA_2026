#include <iostream>
using namespace std;
int main()
{
    // char str[] = "gfg";  -> string
    // char str[] = {'g', 'f', 'g'}; //->not string (it can give segmentation fault )
    char str[] = {'g', 'f', 'g', '\0'}; // now i want to use this as a string then i have to put  \0 at the end)
    cout << str << endl;
    cout << sizeof(str - 1) << endl;

    return 0;
}