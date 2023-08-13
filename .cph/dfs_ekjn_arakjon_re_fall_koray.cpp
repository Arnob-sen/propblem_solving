#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
    }
vector<vector<ll>> adj;
vector<bool> vis;
void dfs(ll node)
{
    vis[node] = 1;
    for (auto con : adj[node])

    {
        if (!vis[con])
            dfs(con);
    }
}
int main()
{
    fastio
        ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, q, c = 0;
        cin >> n >> m >> q;
        adj.clear();
        vis.clear();
        adj.resize(n + 2);
        vis.assign(n + 2, 0);
        for (ll i = 1; i <= m; i++)
        {
            ll x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        while (q--)
        {
            ll node;
            cin >> node;
            dfs(node);
        }
        for (ll i = 1; i <= n; i++)
            if (vis[i])
                c++;

        cout << c << endl;
    }
}