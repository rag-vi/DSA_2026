#include <iostream>
using namespace std;
int change(int x)
{
    x = 100;
}
int main()
{
    int a = 10;
    cout << change(a) << endl;
}