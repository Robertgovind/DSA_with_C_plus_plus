#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve(int node, unordered_map<int, bool> &visited, vector<int> adj[],
               vector<int> &ans)
    {
        queue<int> q;
        q.push(node);
        visited[node] = 1;
        while (!q.empty())
        {
            int val = q.front();
            q.pop();
            ans.push_back(val);

            for (int i = 0; i < adj[val].size(); i++)
            {
                if (!visited[adj[val][i]])
                {
                    q.push(adj[val][i]);
                    visited[adj[val][i]] = 1;
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        unordered_map<int, bool> visited;

        solve(0, visited, adj, ans);
        return ans;
    }
};