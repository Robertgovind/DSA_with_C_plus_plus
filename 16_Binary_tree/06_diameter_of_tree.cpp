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
// Time complexity O(n^2), n = number of nodes
int diameter1(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int op1 = diameter1(root->left);
    int op2 = diameter1(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1, max(op2, op3));
    return ans;
}

pair<int, int> diameterOptimized(node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameterOptimized(root->left);
    pair<int, int> right = diameterOptimized(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}
int diameter(node *root)
{
    return diameterOptimized(root).first;
}
int main()
{
    return 0;
}