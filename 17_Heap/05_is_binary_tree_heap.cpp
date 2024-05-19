#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

int countNodes(Node *root)
{
    if (root == NULL)
        return 0;
    return (1 + countNodes(root->left) + countNodes(root->right));
}
bool isCBT(Node *root, int index, int cnt)
{
    if (root == NULL)
    {
        return true;
    }
    if (index >= cnt)
    {
        return false;
    }
    else
    {
        // for 0 based indexing
        bool left = isCBT(root->left, 2 * index + 1, cnt);
        bool right = isCBT(root->right, 2 * index + 2, cnt);
        return left && right;
    }
}
bool isMaxHeap(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (root->right == NULL)
        return root->data > root->left->data;
    else
    {
        bool left = isMaxHeap(root->left);
        bool right = isMaxHeap(root->right);
        return (left && right && (root->data > root->left->data && root->data > root->right->data));
    }
}
bool isHeap(Node *tree)
{
    int index = 0;
    int count = countNodes(tree);
    if (isCBT(tree, index, count) && isMaxHeap(tree))
        return true;
    return false;
}