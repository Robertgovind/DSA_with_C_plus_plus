#include <bits/stdc++.h>
using namespace std;

vector<int> bellmon_fort(int v, vector<vector<int>> &edges, int s)
{
    vector<itn> dist(v, 1e8);
    dist[0] = 0;
    for (int i = 0; i < v - 1; i++)
    {
        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int wt = it[2];
            if (dist[v] != 1e8)
                &&dist[u] + wt < dist[v]
                {
                    dist[v] = dist[u] + wt;
                }
        }
    }
    // to check negative cycle
    for (auto it : edges)
    {
        int u = it[0];
        int v = it[1];
        int wt = it[2];
        if (dist[v] != 1e8 && dist[u] + wt < dist[v])
            return {-1};
    }
}