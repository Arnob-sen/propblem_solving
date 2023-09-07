#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> adj[200005];
vector<bool> vis(200005, false);
ll side[200005] = {0};
bool ans = true;
vector<int> comp;
int c = 0;
void dfs(int node)
{
    vis[node] = true;

    for (auto x : adj[node])
    {
        if (!vis[x])
            dfs(x);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!vis[i])
        {
            comp.push_back(i);
            dfs(i);
        }
    }
    cout << comp.size() - 1 << endl;
    for (int i = 0; i < comp.size() - 1; i++)
        cout << comp[i] << " " << comp[i + 1] << endl;
}