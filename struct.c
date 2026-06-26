#include <stdio.h>
struct Point
{
    int x;
    int y;
};

int main()
{
    // we  can change order here no diff
    printf("%d %d", p.x, p.y);
    return 0;
}