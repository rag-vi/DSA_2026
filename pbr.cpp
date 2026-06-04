#include <iostream>
using namespace std;
int change(int &x)
{
    x = 100;
}
int main()
{
    int a = 5;

    change(a);
    cout << a;
}