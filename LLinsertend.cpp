#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *head = new Node();
    head->data = 11;
    head->next = NULL;
    Node *second = new Node();
    second->data = 22;
    second->next = NULL;
    head->next = second;
    Node *newNodeEnd = new Node();
    newNodeEnd->data = 30;
    newNodeEnd->next = NULL;
    second->next = newNodeEnd;

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
