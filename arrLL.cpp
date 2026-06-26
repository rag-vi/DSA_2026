#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int main()
{
    Node *arr[3] = {NULL};

    arr[0] = new Node(10);
    arr[0]->next = new Node(20);

    arr[1] = new Node(5);

    for (int i = 0; i < 3; i++)
    {
        Node *temp = arr[i];

        cout << "List " << i << ": ";

        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    return 0;
}