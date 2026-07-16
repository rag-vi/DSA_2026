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

    // LL is 10 ----> 20 -----> 30 ------>40-----> NULL
    // and we want10 ----> 20 -----> 40-----> NULL position 3 deleted;
    int position;
    cin >> position;

    Node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *temp = head;

        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }

        Node *del = temp->next;
        temp->next = del->next;
        delete del;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}