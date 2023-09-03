#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> adj[100005];
vector<bool> vis(100005, false);

void dfs(int node)
{
    vis[node] = true;
    for (auto u : adj[node])
    {
        if (!vis[u])
            dfs(u);
    }
}

int main()
{
    int n, m, c = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            c++;
            dfs(i);
        }
    }
    if (m != n - 1)
        cout << "NO\n";
    else if (c == 1)
        cout << "YES" << endl;
    else
        cout << "NO\n";
}