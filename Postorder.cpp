#include <iostream>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};

void Postorder(TreeNode *root)
{
    if (root == NULL)
        return;
    Postorder(root->left);

    Postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    TreeNode *root = new TreeNode();
    root->data = 1;
    root->left = NULL;
    root->right = NULL;

    TreeNode *LeftNode = new TreeNode();
    LeftNode->data = 2;
    LeftNode->left = NULL;
    LeftNode->right = NULL;
    root->left = LeftNode;

    TreeNode *RightNode = new TreeNode();
    RightNode->data = 3;
    RightNode->left = NULL;
    RightNode->right = NULL;
    root->right = RightNode;

    TreeNode *leftchild = new TreeNode();
    leftchild->data = 4;
    leftchild->left = NULL;
    leftchild->right = NULL;
    LeftNode->left = leftchild;

    Postorder(root);
    return 0;
}