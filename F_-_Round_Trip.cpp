#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXN 10000
vector<vector<ll>> adjList(MAXN);
vector<bool> used(MAXN, false);
vector<ll> d(MAXN), p(MAXN);
queue<ll> q;

vector<ll> ans;
ll n, m, c = 0;
bool ok = 0;
void bfs(ll a)
{
    queue<ll> q;
    q.push(a);
    used[a] = true;
    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        for (ll u : adjList[v])
        {
            if (used[u] == 0)
            {
                q.push(u);

                d[u] = d[v] + 1;
                used[u] = 1;
            }
            else if (u == a)
            { // oi node e fire asle
                d[u] = d[v] + 1;
                ok = true;
                return;
            }
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
        bfs(i);
        if (ok && d[i] != 0)
        {
            // cout << d[i] + 1 << endl;
            for (int v = n; v != -1; v = p[v])
                ans.push_back(v);
            reverse(ans.begin(), ans.end());
            cout << ans.size() + 1 << endl;

            for (int v : ans)
                cout << v << " ";

            cout << ans[0] << endl;
        }
        else
            cout << "IMPOSSIBLE\n";
    }
}