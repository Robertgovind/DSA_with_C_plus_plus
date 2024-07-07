// Detect cycle in undirected graph using BFS
#inlcude < iostream>
#include <vector>
#include <queue>
using namespace std;

bool detect(int src, vector<int> adj[], int vis[])
{
    vis[src] = 1;
    queue<pair<int, int>> q;
    q.push({src, -1});
    while (!q.empty())
    {
        int node = q.front();
        int parent = q.front().second;
        q.pop();

        for (auto adjNode : adj[node])
        {
            if (!vis[adjNode])
            {
                vis[adjNode] = 1;
                q.push({adjNode, node});
            }
            else if (parent != adjNode)
            {
                return true;
            }
        }
    }
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    int vis[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
        {
            if (detect(i, adj, vis))
                return true;
        }
    }
    return false;
}