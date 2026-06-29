#include <iostream>
using namespace std;
class Stack
{
    int arr[100];
    int topIndex;

public:
    Stack()
    {
        topIndex = -1;
    }
    void push(int x)
    {
        topIndex++;
        arr[topIndex] = x;
    }
    void pop()
    {
        if (topIndex != -1)
            topIndex--;
    }
    int top()
    {
        return arr[topIndex];
    }
    bool empty()
    {
        return topIndex == -1;
    }
    int size()
    {
        return topIndex + 1;
    }
};
int main()
{

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}