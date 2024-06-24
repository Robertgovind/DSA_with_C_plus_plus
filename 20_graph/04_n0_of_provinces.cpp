#include <iostream>
#include <vector>
#include <queue>
uisng namespace std;

void dfs(int node, vector<int> adj[], int vis[])
{
    vis[node] = 1;
    ls.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[node])
            dfs(it, adj, vis, ls);
    }
}

int countProvinces(int v, vector<int> adj[])
{
    int vis[v + 1];
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            dfs(i, adj, vis);
            count++;
        }
    }
    return count;
}