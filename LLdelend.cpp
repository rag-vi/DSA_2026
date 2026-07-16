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
    head->data = 10;
    head->next = NULL;
    Node *second = new Node();
    second->data = 110;
    second->next = NULL;
    head->next = second;
    Node *third = new Node();
    third->data = 90;
    third->next = NULL;
    second->next = third;

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *last = temp->next;
    temp->next = NULL;
    delete last;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}