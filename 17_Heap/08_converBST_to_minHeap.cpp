#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

void inorder(Node *root, vector<int> &in)
{
    if (root == NULL)
        return;

    inorder(root->right, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

void fillPreorder(Node *root, vector<int> &in, int index)
{
    if (index >= in.size())
    {
        return;
    }
    root->data = in[index++];
    fillPreorder(root->left, in, index);
    fillPreorder(root->right, in, index);
}
Node *convertBSTtoMinHeap(Node *root)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);
    int index = 0;
    fillPreorder(root, in, index);
    return root;
}
