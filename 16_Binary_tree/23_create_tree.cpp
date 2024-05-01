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

int findPosition(int in[], int ele, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (in[i] == ele)
            return i;
    }
    return -1;
}

Node *solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n)
{
    if (index >= n || inorderStart > inorderEnd)
    {
        return NULL;
    }
    int element = pre[index];
    Node *root = new Node(element);
    int postion = findPosition(in, element, n);

    root->left = solve(in, pre, index, inorderStart, postion - 1, n);
    root->right = solve(in, pre, index, postion + 1, inorderEnd, n);
    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int preorderIndex = 0;
    Node *ans = solve(in, pre, preorderIndex, 0, n - 1, n);
    return ans;
}