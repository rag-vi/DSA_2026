#include <iostream>
using namespace std;

int swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    return {x, y};
}
int main()
{

    int result = swap(10, 15);
    cout << result;
}