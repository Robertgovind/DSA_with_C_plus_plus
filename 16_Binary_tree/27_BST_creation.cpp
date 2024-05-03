#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertToBST(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (root->data > d)
        root->left = insertToBST(root->left, d);
    else
        root->right = insertToBST(root->right, d);

    return root;
}

void teakeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertToBST(root, data);
        cin >> data;
    }
}
