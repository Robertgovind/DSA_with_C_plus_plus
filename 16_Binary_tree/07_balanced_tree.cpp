#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left, right) + 1;

    return ans;
}
// Time complexity O(n^2)
bool isBalanced1(node *root)
{
    // balse case
    if (root == NULL)
    {
        return true;
    }

    bool left = isBalanced1(root->left);
    bool right = isBalanced1(root->right);
    bool diff = abs(height(root->left) - height(root->right)) <= 1;

    if (left && right && diff)
    {
        return true;
    }

    return false;
}

// Optimized code

pair<bool, int> isBalancedOptimized(node *root)
{
    // base case
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> leftAns = isBalancedOptimized(root->left);
    pair<bool, int> rightAns = isBalancedOptimized(root->right);

    bool diff = abs(leftAns.second - rightAns.second) <= 1;

    pair<bool, int> ans;
    ans.second = max(leftAns.second, rightAns.second) + 1;
    if (leftAns.first && rightAns.first && diff)
    {
        ans.first = true;
    }
    else
    {
        ans.first = false;
    }

    return ans;
}

bool isBalanced(node *root)
{
    return isBalancedOptimized(root).first;
}