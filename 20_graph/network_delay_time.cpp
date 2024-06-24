#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {

        vector<pair<int, int>> graph[n + 1];
        int td = times.size();
        for (int i = 0; i < td; i++)
        {
            graph[times[i][0]].push_back({times[i][2], times[i][1]});
        }
        int dist[n + 1] = {INT_MAX};
        dist[0] = -1;
        dist[k] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});
        while (pq.size())
        {
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int dis = it.first;

            for (auto itr : graph[node])
            {
                int adjNode = itr.second;
                int edgeWt = itr.first;
                if (dis + edgeWt < dist[adjNode])
                {
                    dist[itr.second] = dis + edgeWt;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (dist[i] == INT_MAX)
                return -1;
            else if (ans < dist[i])
                ans = dist[i];
        }
        return ans;
    }
};