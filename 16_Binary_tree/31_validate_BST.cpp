#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

bool isBSt(Node *root, int mini, int maxi)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data >= mini && root->data <= maxi)
    {
        bool left = isBSt(root->left, mini, root->data);
        bool right = isBSt(root->right, root->data, maxi);
        return left && right;
    }
}
bool validateBST(Node *root)
{
}