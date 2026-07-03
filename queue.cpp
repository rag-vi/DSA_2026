#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.size() << endl;
    q.push(40);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}

/*
| Operation | Time     |
| --------- | -------- |
| push()    | **O(1)** |
| pop()     | **O(1)** |
| front()   | **O(1)** |
| back()    | **O(1)** |
| empty()   | **O(1)** |
| size()    | **O(1)** |
*/
