#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

void solve(Node *root, vector<int> &ans, int level)
{
    if (root == NULL)
    {
        return;
    }
    if (level == ans.size())
        ans.push_back(root->data);
    // for right to left
    solve(root->right, ans, level + 1);
    solve(root->left, ans, level + 1);
}