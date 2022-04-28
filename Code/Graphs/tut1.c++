#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Graph
{
public:
    unordered_map<T, list<T>> adj;

    void addEdge(T u, T v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed

        // create an edge from u to v
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printGraph()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph<int> g;

    int n, m;
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;

    int direction;
    cout << "Enter 0 for undirected and 1 for directed: ";
    cin >> direction;

    cout << "Enter the edges " << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, direction);
    }

    g.printGraph();

    return 0;
}