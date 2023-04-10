#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
    int n; // number of vertices
    int m; // number of edges
    cin >> n >> m;

    // adjacency matrix to represent the graph
    vector<vector<int>> adj(n + 1, vector<int>(n + 1, INF));

    // initialize adjacency matrix with edge weights
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;
    }

    // Floyd Warshall algorithm
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i != j)
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                if (i == j)
                {
                    adj[i][j] = 0;
                    adj[j][i] = 0;
                }
            }
        }
    }

    // print the shortest distances between all pairs of vertices
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (adj[i][j] == INF)
            {
                cout << "I"
                     << " ";
            }
            else
            {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}