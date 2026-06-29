#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;

    cout << st.size() << endl;
    cout << st.empty() << endl;
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}