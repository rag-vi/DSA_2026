#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int main()
{
    // Create first node
    Node *head = new Node();
    head->data = 10;
    head->next = NULL;

    // Create second node
    Node *second = new Node();
    second->data = 20;
    second->next = NULL;
    head->next = second;

    // Create third node
    Node *third = new Node();
    third->data = 30;
    third->next = NULL;
    second->next = third;

    // Create fourth node
    Node *fourth = new Node();
    fourth->data = 40;
    fourth->next = NULL;
    third->next = fourth;

    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next; // save next node
        curr->next = prev; // reverse the link
        prev = curr;       // move prev forward
        curr = next;       // move curr forward
    }

    head = prev;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}