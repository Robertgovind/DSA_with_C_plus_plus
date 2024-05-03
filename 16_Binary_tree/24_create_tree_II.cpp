// front inorder and postorder traversal data
#include <iostream>
#include <map>
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

void createMapping(int in[], map<int, int> &nodeToIndex, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodeToIndex[in[i]] = i;
    }
}

Node *solve(int in[], int post[], int &index, int inorderStart,
            int inorderEnd, int n, map<int, int> &nodeToIndex)
{
    if (index < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }
    int element = post[index];
    Node *root = new Node(element);
    int postion = nodeToIndex[element];
    // Here call is from right to left as root nodes lies on right to left in postOrder
    root->right = solve(in, post, index, postion + 1, inorderEnd, n, nodeToIndex);
    root->left = solve(in, post, index, inorderStart, postion - 1, n, nodeToIndex);

    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int postorderIndex = 0;
    map<int, int> nodeToIndex;
    createMapping(in, nodeToIndex, n);

    Node *ans = solve(in, pre, postorderIndex, 0, n - 1, n, nodeToIndex);
    return ans;
}