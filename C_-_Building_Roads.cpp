
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
