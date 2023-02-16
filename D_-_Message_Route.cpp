#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 100000000
vector<vector<ll>> adjList(MAXN);
vector<bool> vis(MAXN, false);
vector<ll> d(MAXN), p(MAXN);
queue<ll> q;

vector<ll> ans;
ll n, m;
int main()
{
    cin >> n >> m;
    ll c = 0;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    q.push(1);
    p[1] = -1;
    vis[1] = true;

    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        for (auto u : adjList[v])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;

                if (vis[n] == true)
                {
                    c = 1;
                    break;
                }
            }
        }
    }
    if (c == 0)
        cout << "IMPOSSIBLE\n";
    else
    {
        cout << d[n] + 1 << endl;
        for (int v = n; v != -1; v = p[v])
            ans.push_back(v);
        reverse(ans.begin(), ans.end());

        for (int v : ans)
            cout << v << " ";
    }
}