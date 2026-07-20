#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *right;
    Node *left;
};

int main()
{
    Node *root = new Node();
    root->data = 50;
    root->left = NULL;
    root->right = NULL;

    Node *LeftNode = new Node();
    LeftNode->data = 20;
    LeftNode->left = NULL;
    LeftNode->right = NULL;
    root->left = LeftNode;

    Node *RightNode = new Node();
    RightNode->data = 60;
    RightNode->left = NULL;
    RightNode->right = NULL;
    root->right = RightNode;
}