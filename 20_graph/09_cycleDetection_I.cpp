// Cycle detectin in undirected graph using dfs

#include <iostream>
#include <bits/stdc++.h>
uisng namespace std;

bool dfs(int node, int parent, int vis[], vector<int> adj[])
{
    vis[node] = 1;
    for (auto adjNode : adj[node])
    {
        if (!vis[adjNode])
        {
            if (dfs(adjNode, node, vis, adj))
                return true;
        }
        else if (adjNode != parent)
            return true;
    }
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    int vis[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!vis[i])
            if (dfs(i, -1, vis, adj) == true)
                return true;
    }
    return false;
}