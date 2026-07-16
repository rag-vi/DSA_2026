#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

bool search(Node *head, int key)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

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

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (search(head, key))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}