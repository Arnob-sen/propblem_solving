#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> adj[200005];
vector<bool> vis(200005, false);
ll side[200005] = {0};
bool ans = true;
vector<pair<int, int>> ok;
void dfs1(int node)
{
    vis[node] = true;

    for (auto x : adj[node])
    {
        if (!vis[x])
        {
            side[x] = side[node] ^ 1;

            dfs1(x);
        }
        else if (side[x] == side[node])
            ans = false;
    }
} // to find the number of nodes in each subtree
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        ok.push_back({u, v});
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
        {
            dfs1(i);
        }
    }
    if (ans)
    {
        cout << "YES\n";
        for (int i = 0; i < m; i++)
            if (side[ok[i].first])
                cout << "0";
            else
                cout << "1";
    }
    else
        cout << "NO\n";
}