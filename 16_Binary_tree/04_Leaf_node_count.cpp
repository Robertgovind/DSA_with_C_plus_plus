#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void solve(node *root, int &count)
{
    if (root == NULL)
    {
        return;
    }

    solve(root->left, count);
    if (root->left == NULL && root->right == NULL) // condition of leaf node
    {
        count++;
    }
    solve(root->right, count);
}

int countLeafNode(node *root)
{
    int count = 0;
    solve(root, count);
    return count;
}