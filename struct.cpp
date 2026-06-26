#include <iostream>
using namespace std;
/*struct Point
{
    int x;
    int y;
};
int main()
{
    Point p;
    p.x = 10;
    p.y = 20;
    cout << p.x << " " << p.y;
    return 0;
}*/

struct Student
{
    int rollno;
    string name;
    string add;
};
int main()
{
    Student s = {101, "abc", "xyz"};
    cout << s.rollno << " " << s.name << " " << s.add;
}
