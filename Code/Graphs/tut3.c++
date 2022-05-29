#include <bits/stdc++.h>
using namespace std;

class Components
{
public:
    int n;
    int *parent, *rank;

    Components(int n)
    {
        rank = new int[n];
        parent = new int[n];
        this->n = n;

        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int findParent(int &node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        return parent[node] = findParent(parent[node]);
    }

    void unionSet(int x, int y)
    {
        int u = findParent(x);
        int v = findParent(y);

        if (rank[u] < rank[v])
        {
            parent[u] = v; // v ko banado u ka parent
        }
        else if (rank[v] < rank[u])
        {
            parent[v] = u;
        }
        else
        {
            parent[v] = u;
            rank[u]++;
        }
    }

    void print()
    {
        cout << "Parent: ";
        for (int i = 1; i <= n; i++)
        {
            cout << parent[i] << " ";
        }

        cout << endl;

        cout << "Rank: ";
        for (int i = 1; i <= n; i++)
        {
            cout << rank[i] << " ";
        }
    }
};

int main()
{
    Components obj(7);
    obj.unionSet(2, 3);
    obj.unionSet(3, 4);
    obj.unionSet(1, 2);
    obj.unionSet(5, 6);
    obj.unionSet(4, 5);
    obj.unionSet(6, 7);

    obj.print();

    return 0;
}