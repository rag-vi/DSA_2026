#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{ // insert in begininh
    Node *newNode = new Node();
    newNode->data = 5;

    Node *head = new Node();
    newNode->next = head;
    head->data = 10;
    head->next = NULL;
    Node *second = new Node();
    second->data = 20;
    second->next = NULL;
    head->next = second;
    Node *third = new Node();
    third->data = 30;
    third->next = NULL;
    second->next = third;
    head = newNode;
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    return 0;
}