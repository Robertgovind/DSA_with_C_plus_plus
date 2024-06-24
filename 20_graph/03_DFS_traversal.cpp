#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    void solve(int node, unordered_map<int, bool> &visited, vector<int> adj[], vector<int> &ans)
    {
        ans.push_back(node);
        visited[node] = 1;

        for (auto i : adj[node])
        {
            if (!visited[i])
                solve(i, visited, adj, ans);
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<int> ans;
        unordered_map<int, bool> visited;
        solve(0, visited, adj, ans);
        return ans;
    }
};