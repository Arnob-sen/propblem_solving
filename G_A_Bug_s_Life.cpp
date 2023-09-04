#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> adj[20005];
vector<bool> vis(20005, false);
ll side[20005] = {0};
bool ans = true;
void dfs(int node)
{
    vis[node] = true;
    for (auto v : adj[node])
    {

        if (!vis[v])
        {
            side[v] = side[node] ^ 1;
            dfs(v);
        }
        else if (side[v] == side[node])
            ans = false;
    }
}

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    int c = 0;
    while (t--)
    {
        cout << "Scenario #" << ++c << ":\n";
        int n, m;
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
            vis[i] = false;
            side[i] = 0;
        }
        ans = true;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        if (ans)
            cout << "No suspicious bugs found!\n";
        else
            cout << "Suspicious bugs found!\n";

        for (int i = 1; i <= n; i++)
        {
            vis[i] = false;
            side[i] = 0;
            adj[i].clear();
        }
    }
    return 0;
}