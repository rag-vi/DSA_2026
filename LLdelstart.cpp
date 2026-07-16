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

    Node *temp = head; // temp is at 10
    head = head->next; // head is at 20
    delete temp;       // this only means deleting the node where temp is it is not deleting temp

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}