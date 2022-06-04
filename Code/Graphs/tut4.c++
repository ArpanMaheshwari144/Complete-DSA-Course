// Articulation Point [https://bit.ly/3amKdsY]

#include <bits/stdc++.h>
using namespace std;

void dfs(int &node, int parent, vector<int> &discoveryTime, vector<int> &low, unordered_map<int, bool> &vis, unordered_map<int, list<int>> &adj, vector<int> &articulationPoint, int &timer)
{

    vis[node] = true;
    discoveryTime[node] = low[node] = timer++;
    int child = 0;
    for (auto neighbour : adj[node])
    {
        if (neighbour == parent)
        {
            continue;
        }

        if (!vis[neighbour])
        {
            dfs(neighbour, node, discoveryTime, low, vis, adj, articulationPoint, timer);

            // jab dfs call se wapas aayenge tab low ko update karna hoga
            low[node] = min(low[node], low[neighbour]);

            // check articulation point or not
            if (low[neighbour] >= discoveryTime[node] && parent != -1)
            {
                articulationPoint[node] = 1;
            }
            child++;
        }
        else
        {
            // node already visited and not a parent
            // Back edge
            low[node] = min(low[node], discoveryTime[neighbour]);
        }
    }

    // check for starting node
    if (parent == -1 && child > 1)
    {
        articulationPoint[node] = 1;
    }
}

int main()
{
    int n = 5;
    int e = 5;
    vector<pair<int, int>> edges;
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(3, 4));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));

    // adj list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> discoveryTime(n);
    vector<int> low(n);
    unordered_map<int, bool> vis;
    vector<int> articulationPoint(n, 0);

    for (int i = 0; i < n; i++)
    {
        discoveryTime[i] = -1;
        low[i] = -1;
    }

    // dfs
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1, discoveryTime, low, vis, adj, articulationPoint, timer);
        }
    }

    // print ap
    cout << "Articulation Points are: ";
    for (int i = 0; i < n; i++)
    {
        if (articulationPoint[i] != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}