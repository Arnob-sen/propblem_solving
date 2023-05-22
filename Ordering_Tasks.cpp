#include <bits/stdc++.h>
using namespace std;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
int main()
{
    fastio

        int n,
        m;
    while (true)
    {
        cin >> n >> m;
        if (!n && !m)
            break;
        vector<vector<int>> adj(n + 1);
        vector<int> indegree(n + 1);

        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            if (indegree[i] == 0)
                q.push(i);
        }
        vector<int> topSort;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            topSort.push_back(u);
            for (int v : adj[u])
            {
                // int v = adj[u][i];
                indegree[v]--;
                if (indegree[v] == 0)
                    q.push(v);
            }
        }
        for (int i : topSort)
            cout << i << " ";

        cout << endl;
    }
    return 0;
}