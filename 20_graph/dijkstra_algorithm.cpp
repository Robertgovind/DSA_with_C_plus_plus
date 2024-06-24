#include <bits/stdc++.h>
using namespace std;

// Using minHeap
vector<int> dijkstraAlgorithm(int v, vector<vector<int>> adj[], int s)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(v, 1e9);
    dist[s] = 0;
    pq.push({0, s});
    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (auto it : adj[node])
        {
            int edgeWeight = it[1];
            int adjNode = it[0];

            if (dis + edgeWeight < dist[adjNode])
            {
                dist[adjNode] = dis + edgeWeight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}

// using set
vector<int> dijAlgorithm(int v, vector<vector<int>> adj[], int s)
{
    set<pair<int, int>> st;
    vector<int> dist(v, 1e9);
    st.insert(0, s);
    dist[0] = 0;
    while (!st.empty())
    {
        auto it = *(st.begin());
        int node = it.second;
        int dis = it.first;
        st.erase(it);

        for (auto it : adj[node])
        {
            int adjNode = it[0];
            int edgW = it[1];
            if (dis + edgW < dist[adjNode])
            {
                if (dist[adjNode] != 1e9)
                {
                    st.erase({dist[adjNode], adjNode});
                }
                dist[adjNode] = dis + edgW;
                st.insert({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}