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
    second->data = 20;
    second->next = NULL;
    head->next = second;

    Node *third = new Node();
    third->data = 30;
    third->next = NULL;
    second->next = third;

    Node *fourth = new Node();
    fourth->data = 40;
    fourth->next = NULL;
    third->next = fourth;

    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << "\n"
             << temp->data << " \n";
        temp = temp->next;
    }
}