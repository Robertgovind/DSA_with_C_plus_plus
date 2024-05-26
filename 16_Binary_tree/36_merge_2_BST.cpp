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
/*
 Approach-I
void inorder(Node *root, vector<int> &in)
{
    if (root == NULL)
        return;

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

vector<int> mergeArray(vector<int> &a, vector<int> &b)
{
    vector<int> ans(a.size() + b.size());
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            ans[k++] = a[i];
            i++;
        }
        else
        {
            ans[k++] = b[j];
            j++;
        }
    }
    while (i < a.size())
    {
        ans[k++] = a[i];
        i++;
    }
    while (j < a.size())
    {
        ans[k++] = b[j];
        j++;
    }
    return ans;
}
Node *inorderToBST(int s, int e, vector<int> &in)
{
    if (s > e)
        return NULL;

    int mid = (s + e) / 2;
    Node *root = new Node(in[mid]);
    root->left = inorderToBST(s, mid - 1, in);
    root->right = inorderToBST(mid + 1, e, in);
    return root;
}

Node *mergeBST(Node *root1, Node *root2)
{

    // Step1 Store inorder data
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    vector<int> ans = mergeArray(bst1, bst2);
    int s = 0, e = ans.size() - 1;
    return inorderToBST(s, e, ans);
}
*/