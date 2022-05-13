// Shortest path in a directed acyclic graph

#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight)
    {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);
    }

    void printGraph()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << ", " << j.second << ") ";
            }
            cout << endl;
        }
    }

    void topoSortDFS(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = 1;
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour.first])
            {
                topoSortDFS(neighbour.first, visited, s);
            }
        }

        // jab wapas recursion ki call se aayenge to hum curr element ko stack mei push kar denge
        s.push(node);
    }

    void getShortestPath(int src, vector<int> &dist, stack<int> &s)
    {
        dist[src] = 0;
        while (!s.empty())
        {
            int top = s.top();
            s.pop();

            if (dist[top] != INT_MAX)
            {
                for (auto i : adj[top])
                {
                    if (dist[top] + i.second < dist[i.first])
                    {
                        dist[i.first] = dist[top] + i.second;
                    }
                }
            }
        }
    }
};

int main()
{
    Graph g;
    int v = 6;
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);

    // topo sort
    unordered_map<int, bool> visited;
    stack<int> s;
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            g.topoSortDFS(i, visited, s);
        }
    }

    int src = 1;
    vector<int> dist(v);
    for (int i = 0; i < v; i++)
    {
        dist[i] = INT_MAX;
    }
    g.getShortestPath(src, dist, s);

    cout << "Shortest path is: ";
    cout << "INT_MAX ";
    for (int i = 1; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }

    return 0;
}