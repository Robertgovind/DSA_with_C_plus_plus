#include <bits/stdc++.h>
using namespace std;

class AdjMatrix
{
public:
    vector<vector<bool>> mat;

    void addEdge(int n)
    {
        for (int i = 0; i < n; i++)
        {
            vector<bool> temp;
            for (int j = 0; j < n; j++)
            {
                bool val;
                cout << node[i] << "---" << node[j] << end;
                cin >> val;
                temp.push_back(val);
            }
            mat.push_back(temp);
            temp.clear();
        }
    }

    void printGraph(vector<char> &node)
    {
        cout << "Nodes : ";
        for (auto x : node)
            cout << x << " ";
        cout << endl;
        for (int i = 0; i < node.length(); i++)
        {
            for (int j = 0; j < node.length(); j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class AdjList
{
public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool directed)
    {
        adj[u].push_back(v);
        if (!directed)
            adj[v].push_back(u);
    }

    void printList()
    {
        for (auto x : adj)
        {
            cout << x.first << "->";
            for (auto y : x.second)
                cout << y << " ";
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes " << endl;
    cin >> n;

    AdjMatrix graph;
    vector<char> nodes(n);
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        nodes[i] = ele;
    }
    graph.addEdge(n);
    graph.printGraph(nodes);

    // int m;
    // cout << "Enter the number of edges " << endl;
    // cin >> m;

    // AdjList graph;

    // for (int i = 0; i < m; i++)
    // {
    //     int first, second;
    //     cin >> first >> second;
    //     graph.addEdge(first, second, 0);
    // }
    // graph.printList();
    return 0;
}