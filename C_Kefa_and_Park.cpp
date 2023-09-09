#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX{100010};
vector<int> adj[MAX];
vector<bool> vis(MAX);
ll marked[MAX];
int n, m, c = 0, res = 0;
void dfs(int node, int c = 0)
{

    vis[node] = true;
    if (marked[node])
        c++;
    else
        c = 0;
    if (c > m)
        return;
    if (adj[node].size() <= 1 && node != 1)
        res++; // found the root

    for (auto x : adj[node])
    {
        if (!vis[x])
            dfs(x, c);
    }
}
int main()
{

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> marked[i];
    }
    for (int i = 1; i < n; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    cout << res << endl;
}
