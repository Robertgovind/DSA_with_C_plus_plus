#include <iostream>
#include <queue>
using namespace std;

int minCost(vector<int> ropes)
{
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < ropes.size(); i++)
    {
        pq.push(ropes[i]);
    }
    int cost = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int c = a + b;
        cost += c;
        pq.push(c);
    }
    return cost;
}