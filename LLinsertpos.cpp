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
    third->data = 40;
    third->next = NULL;
    second->next = third;

    // Create new node
    Node *newNode = new Node();
    newNode->data = 30;
    newNode->next = NULL;
    // position of insertion
    int position = 3;

    // Traverse to the node before the required position
    Node *temp = head;

    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    // Insert the node
    newNode->next = temp->next;
    temp->next = newNode;

    // Print the linked list
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}