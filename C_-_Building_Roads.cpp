// /*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 202020
vector<vector<ll>> adjList(MAXN);
vector<bool> vis(MAXN, false);

vector<ll> ans;
ll n, m;
void dfs(ll node)
{
    vis[node] = true;
    for (auto next : adjList[node])
    {
        if (vis[next] == false)
        {
            dfs(next);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {

            ans.push_back(i);
            dfs(i);
        }
    }
    cout << ans.size() - 1 << endl;
    for (ll i = 0; i < ans.size() - 1; i++)
        cout << ans[i] << " " << ans[i + 1] << endl;
}

/*/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 202020

int n, m;
vector<vector<int>> adj(MAXN);
vector<bool> visited(MAXN, false);
vector<int> bridges;

void DFS(int node)
{
    visited[node] = true;
    for (auto child : adj[node])
    {
        if (visited[child] == false)
        {
            DFS(child);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int node1, node2;
        cin >> node1 >> node2;
        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            bridges.push_back(i);
            DFS(i);
        }
    }
    cout << bridges.size() - 1 << endl;
    for (int i = 0; i < bridges.size() - 1; i++)
    {
        cout << bridges[i] << " " << bridges[i + 1] << endl;
    }
    return 0;
}
/*/