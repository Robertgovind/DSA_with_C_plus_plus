#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};
// optimized code
// pair of boll and sum is returned
pair<bool, int> isSumTreeOptimized(Node *root)
{
    // base case
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    if (root->left == NULL && root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
    }

    pair<int, int> left = isSumTreeOptimized(root->left);
    pair<int, int> right = isSumTreeOptimized(root->right);

    bool condn = root->data == left.second + right.second;

    pair<bool, int> ans;
    if (left.first && right.first && condn)
    {
        ans.first = true;
        ans.second = left.second + right.second;
    }
    else
    {
        ans.first = false;
    }
    return ans;
}