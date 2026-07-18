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
    third->data = 100;
    third->next = NULL;
    second->next = third;

    Node *fourth = new Node();
    fourth->data = 40;
    fourth->next = NULL;
    third->next = fourth;
    Node *fifth = new Node();
    fifth->data = 50;
    fifth->next = NULL;
    fourth->next = fifth;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data;
}