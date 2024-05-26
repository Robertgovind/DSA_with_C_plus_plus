#include <iostream>
#include <vector>
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
class info
{
public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(Node *root, int &ans)
{
    if (root == NULL)
    {
        return {INT16_MIN, INT16_MAX, true, 0};
    }
    info left = solve(root->left, ans);
    info right = solve(root->right, ans);

    info currNode;
    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root->data, right.maxi);
    currNode.mini = min(root->data, left.mini);

    if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini))
    {
    }
}

int largestBST(Node *root)
{
    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}