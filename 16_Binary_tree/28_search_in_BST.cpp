#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

// this solutin gives TLE
bool searchInBST_I(Node *root, int target)
{
    if (root == NULL)
        return false;
    if (root->data == target)
        return true;
    if (root->data > target)
        return searchInBST_I(root->left, target);
    else
        return searchInBST_I(root->right, target);
}

// Optimized
bool searchInBST(Node *root, int target)
{
    Node *temp = root;
    while (temp != NULL)
    {
        if (temp->data == target)
            return true;
        if (root->data > target)
            temp = temp->left;
        else
            temp = temp->right;
    }
    return false;
}