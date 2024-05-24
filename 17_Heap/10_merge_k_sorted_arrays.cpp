#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    int r;
    int c;

    Node(int data, int row, int col)
    {
        this->data = data;
        r = row;
        c = col;
    }
};
class compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    priority_queue<Node *, vector<Node *>, compare> minHeap;
    for (int i = 0; i < k; i++)
    {
        Node *temp = new Node(kArrays[i][0], i, 0);
        minHeap.push(temp);
    }
    vector<int> ans;
    while (minHeap.size() > 0)
    {
        Node *temp = minHeap.top();
        ans.push_back(temp->data);
        minHeap.pop();
        int row = temp->r;
        int col = temp->c;
        if (col + 1 < kArrays[row].size())
        {
            Node *next = new Node(kArrays[row][column + 1], row, col + 1);
            minHeap.push(next);
        }
    }
    return ans;
}