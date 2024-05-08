#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *LCAinBST(Node *root, Node *P, Node *Q)
{
    if (root == NULL)
        return NULL;
    if (root->data < P->data && root->data < Q->data)
        return LCAinBST(root->right, P, Q);
    if (root->data > P->data && root->data > Q->data)
        return LCAinBST(root->left, P, Q);

    return root;
}